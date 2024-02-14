# se importan los modulos
import os
import kaggle


# se define la funcion
def descargar_conjunto_de_datos():
    # autentica usando las credenciales que estan en el kaggle.json
    kaggle.api.authenticate()

    # nombre del conjunto que se va a descargar
    dataset_name = "akshaydattatraykhare/car-details-dataset"

    # donde se va a guardar el archivo descargado
    download_path = "./cars_analysis"

    # verifica si existe la carpeta y si no existe la crea
    if not os.path.exists(download_path):
        os.makedirs(download_path)

    # descarga los archivos
    kaggle.api.dataset_download_files(dataset_name, download_path, unzip=True)
    # imprime el mensaje para confirmar que fue exitoso
    print("Descarga completada.")
