# se importa la biblioteca
import requests

# se define un diccionario
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
# se hace una solicitud post a la pagina web, los datos
# se envian como solicitud delformuladio
response = requests.post('https://ejemplo.com/login', data=payload)
# imprime el contenido de la pagina en formato texto
print(response.text)

# diccionario
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
# se hace la solicitud post a la pagina, los datos se envian en formato json
response = requests.post('https://ejemplo.com/login', json=payload)
# se imrprime el contenido en formato texto
print(response.text)
