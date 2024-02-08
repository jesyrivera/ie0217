# se importa la biblioteca
import requests

# se solicita obtener datos de usuarios
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
# convierte la respuesta en formato json se obtienen objetos python
users_data = users_response.json()

# se solicita obtener datos de publicaciones
posts_response = requests.get('https://jsonplaceholder.typicode.com/users')
# convierte la respuesta en formato json
posts_data = posts_response.json()

# procesa los datos
# diccionario vacio para almacenar las publicaciones
user_posts = {}

# ciclo for itera sobre cada usuario en la respuesta
for user in users_data:
    # se agrega al diccionario usando el ID como clave
    user_posts[user['id']] = []

# ciclo for itera sobre cada publicacion en la respuesta
for post in posts_data:
    # obtiene el ID del diccionario
    user_id = post.get('userId')
    # verifica si el id existe en el diccionario
    if user_id in user_posts:
        # si existe entonces se agrega la publicacion al usuario
        user_posts[user_id].append({
            # se agregan como diccionario
            'title': post['title'],
            'body': post['body']
        })

# muestra los resultado
# ciclo for itera sobre cada key and value del diccionario
for user_id, posts in user_posts.items():
    # busca el usuario que tenga ese id y con next se devuelve el primer
    # elemento, si no lo encuentra devuelve None
    user = next((user for user in users_data if user['id'] == user_id), None)
    # verifica si existe el usuario
    if user:
        # se imprimen el nombre y email
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        # ciclo for que itera sobre cada publicacion
        for post in posts:
            # imprime el titulo y cuerpo de cada publicacion
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    # si no existe el usuario
    else:
        # imprime el mensaje
        print(f"No se encontraron datos para el usuario con ID {user_id}")
