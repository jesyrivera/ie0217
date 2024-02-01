import pandas as pd

# se concatena dos dataFrames usando la funcion
air_quality = pd.concat([air_quality_pm25, air_quality_no2], axis=0)