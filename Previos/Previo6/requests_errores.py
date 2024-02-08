# se importa la biblioteca
import requests

# bloque que puede provocar error
try:
    # se obtiene los datos desde la pagina web
    response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
    # genera una excepsion si hay un error HTPP
    response.raise_for_status()
    # imprime la informacion en formato de texto
    print(response.text)
# bloque que maneja la excepcio
except requests.exceptions.HTTPError as err:
    # imprime el error
    print(f"Error HTPP: {err}")
