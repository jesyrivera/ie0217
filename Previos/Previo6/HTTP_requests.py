# se importa la biblioteca
import requests

# se obtiene los datos desde la pagina web
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# se imprimen el tipo de dato
print("Tipo:", type(response))
# imprime la respuesta de la solicitud
print("Respuesta:", response)
# imprime la informacion en formato txt
print("Respuesta text:", response.text)
# imprime el diccionario
print("Respuesta:", response.__dict__)
