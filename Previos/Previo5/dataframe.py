import pandas as pd

# se crea un dataFrame dt utilizando una funcion
df = pd.DataFrame(
    {
        # datos se obtienen de diccionarios
        # las claves del diccionario se usan como encabezados
        # los valores van en columnas
        "Name": [
            "Braund, Mr.Owen Harris",
            "Allen, Mr. William Henry",
            "Bonnell, Miss. Elizabeth"
        ],
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "female"]
    }
)