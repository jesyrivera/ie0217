# se importan el modulo
import kaggle


# se define la funcion
def descargar_conjunto_de_datos():
    # autentica usando las credenciales que estan en el kaggle.json
    kaggle.api.authenticate()
    # nombre del conjunto que se va a descargar
    dataset_name = "akshaydattatraykhare/car-details-dataset"
    # descarga los archivos
    kaggle.api.dataset_download_files(dataset_name, ".", unzip=True)
    # imprime el mensaje para confirmar que fue exitoso
    print("Descarga completada.\n")
