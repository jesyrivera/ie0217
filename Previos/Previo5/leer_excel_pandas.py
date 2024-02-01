import pandas as pd

# funcion para leer datos almacenados como un archivo excel
titanic = pd.read_excel("titanic.xlsx", sheet_name="passengers")