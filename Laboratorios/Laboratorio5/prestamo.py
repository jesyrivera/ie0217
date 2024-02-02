import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


# se define la clase
class Prestamo:

    # constructor que inicializa los atributos
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        # atributos
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    # define el metodo de clase
    def calcular_amortizacion(self):
        # bloque que puede generar un error
        try:
            # variable almacena el resultado del calculo
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            # variable almacena el resultado del calculo
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual)**-self.cuotas)
            # se llama al atributo
            saldo_restante = self.monto_prestamo
            # se crea una lista
            amortizacion = []
            # ciclo for que itera entre todas las cuotas
            for cuota in range(1, self.cuotas + 1):
                # variable almacena el resultado de la operacion
                interes_pendiente = saldo_restante * tasa_interes_mensual
                # variable almacena el resultado de la operacion
                amortizacion_principal = cuota_mensual - interes_pendiente
                # variable almacena el resultado de la operacion
                saldo_restante -= amortizacion_principal
                # se le agrega a la lista los datos
                amortizacion.append({'Cuota': cuota, 'Interes': interes_pendiente, 'Amortizacion': amortizacion_principal, 'Saldo restante': saldo_restante})
            # devuelve la lista
            return amortizacion
        # bloque que maneja el error
        except ZeroDivisionError:
            # imprime el mensaje
            print("Error: La cantidad de cuotas no puede ser cero")
            # devolvemos una lista vacia porque hay un error
            return []

    # se define el metodo
    def generar_reporte(self, archivo_salida):
        # bloque que puede generar error
        try:
            # crea un DataFrame que utiliza los datos calcular amortizacion
            df = pd.DataFrame(self.calcular_amortizacion())
            # funcion que escribe el dataFrame en el archivo de salida
            df.to_csv(archivo_salida, index=False)
            # imprime el mensaje y muestra el nombre
            print(f'Reporte generado con exito: {archivo_salida}')
        # bloque qe maneja el error
        except Exception as e:
            # imprime el mensaje y muestra el error
            print(f'Ocurrio un error al generar el reporte: {str(e)}')

    # se define el metodo
    def graficar_amortizacion(self):
        # se crea un DataFrame que utiliza los datos de la lista
        df = pd.DataFrame(self.amortizacion)
        # crea un arreglo que contiene 'Interes' y la columna del dataFrame
        data = np.array([df['Interes'], df['Amortizacion']])
        # crea una barra, la etiqueta y tiene elementos
        plt.bar(df['Cuota'], data[0], label='Interes')
        # crea una barra, etiqueta y tiene elementos
        plt.bar(df['Cuota'], data[1], bottom=data[0], label='Amortizacion')
        # etiqueta del eje x
        plt.xlabel('Numero de cuota')
        # etiqueda del eje y
        plt.ylabel('Monto ($)')
        # titulo
        plt.title('Amortizacion e Interes por Cuota')
        # muestra la informacion
        plt.legend()
        # lo muestra
        plt.show()


def main():
    # bloque puede generar error
    try:
        # se solicita que ingrese el monto del prestamo
        monto_prestamo = float(input("Ingrese el monto del prestamo: "))
        # se solicita que ingrese la tasa de interes anual
        tasa_interes_anual = float(input("Ingrese la tasa de interes anual: "))
        # se solicita que ingrese la cantidad de cuotas
        cuotas = int(input("Ingrese la cantidad de cuotas: "))
        # se crea una instancia de Prestamo con los datos ingresados
        prestamo = Prestamo(monto_prestamo, tasa_interes_anual, cuotas)
        # nombre del archivo
        archivo_salida = "archivo_prestamo.csv"
        # llama al metodo
        prestamo.generar_reporte(archivo_salida)
        # imprime la informacion del prestamo
        print("Informacion")
        print(f"Monto del prestamo: {monto_prestamo}")
        print(f"Tasa de interes anual (%): {tasa_interes_anual}")
        print(f"Cantidad de cuotas: {cuotas}")
        # se grafica
        prestamo.graficar_amortizacion()
    # bloque maneja el error
    except ValueError as ve:
        print(f"Error: {str(ve)} debe ingresar un dato valido.")
    except Exception as e:
        print(f"Ocurrio un error: {str(e)}")


# verifica si se esta ejecutando directamente, entonces name es igual a main
if __name__ == "__main__":
    # se llama a la funcion
    main()