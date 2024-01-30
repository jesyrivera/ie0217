#se importan los modulos
import timeit
import cProfile

def medicion_tiempo(func, *args, **kwargs):
    # con la funcion se obtiene el tiempo actual y se almacena en la variable
    inicio = timeit.default_timer()
    
    # el '*args' indica que cualquier numero de argumentos puede ser pasado a la funcion (tupla)
    # el '**kwargs' indica que cualquier numero de argumentos palabras clase pueden ser pasados a la funcion(diccionario)
    func(*args, **kwargs) #funcion proporciona dos argumentos, ejecuta la funcion y realiza las operaciones
    
    #funcion que obtiene el tiempo actual en que termino la funcion y se almacena en la variable
    fin = timeit.default_timer()
    #calcula cuando tardo en ejecutarse usando el tiempo en que termino y lo resta con el tiempo de inicio
    tiempo_ejecucion = fin - inicio
    #imprime la informacion del tiempo de ejecucion
    print(f"El tiempo de ejecucion de {func.__name__} es de {tiempo_ejecucion} segundos")

    # usando la clase Profile del modulo cProfile, se crea un objeto de perfilado
    profiler = cProfile.Profile()
    #activa el profiler, empieza a registrar la informacion del tiempo de ejecucion
    profiler.enable()
    #llama a la funcion, mientras se ejecuta el profiler registra la informacion de tiempo de ejecucion
    #de cada funcion que se ejecuta del programa
    func(*args, **kwargs)
    #se desactiva el profiler
    profiler.disable()
    #se muestran la informacion registrada
    profiler.print_stats(sort="cumulative")
