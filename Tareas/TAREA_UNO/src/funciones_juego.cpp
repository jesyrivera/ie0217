#include "funciones_juego.hpp"

//! Esta funcion tiene la tarea de imprimir los datos del menu en la pantalla
void mostrarMenu(){
    cout << "\nJuego Adivina el numero";
    cout << "\n--- Menu ---\n";
    cout << "1. Modo de juego Regular\n";
    cout << "2. Modo de juego Desafiante\n";
    cout << "3. Salir\n";
}

/**Esta funcion le solicita al usuario ingresar una opcion del menu, luego procesa la opcion que ingreso
 * la persona, de acuerdo a la opcion que ingrese, va a llamar a el metodo de funcion que corresponde
 * segun cada caso
*/
void leerOpcion(){
    
    int opcion; /**< Se declara la variable que almacena la opcion que ingreso el usuario en el menu*/

    int limite; /**< Se declara la variable que almacena el numero maximo del intervalo para adivinar la variable*/
    
    int vidas; /**< Se declara la variable que contiene el numero de veces que puede intentar adivinar el numero*/
    
    int ingreso; /**< Se declara la variable que almacena el numero que ingrese el usuario intentando adivinar*/
    
    //! Imprime el mensaje que esta entre comillas
    cout << "Ingrese una opcion: ";
    
    //! Lee la opcion que se ha ingresado sobre el menu
    cin >> opcion;

    switch (opcion) {
        case 1:
            /**En caso de que la opcion que se ingreso sea 1, se inicia el modo Regular, en este modo
             * el juego le indica a la persona, si el numero que ingreso es mayor o menor al numero 
             * que intenta adivinar
            */
            modoRegular(limite, ingreso, vidas);
            break;
        case 2:
            /**Si se ingreso el numero 2, entonces se inicia el modo Desafiante del juego, este modo le 
             * indica al usuario si esta hiviendo en caso de que este muy cerca del numero, que esta 
             * caliente cuando esta bastante cerca, frio cuando esta relativamente lejos y congelado
             * cuando este sumamente lejos del numero que debe adivinar
            */
            modoDesafiante(limite, ingreso, vidas);
            break;
        case 3:
            /**Si la persona ingresa esta, entonces termina el programa*/
            cout << "Ha salido del juego, vuelva pronto :)";
            exit(0);
        default:
            /**Esto le indica a la persona que no ha ingresado una opcion valida, en caso de que ingresara
             * un valor que no esta entre las opciones, entonces procede a imprimir el mensaje de abajo
            */
            cout << "Ha ingresado una opcion no valida. Intente de nuevo";
            break;
    }
}

/** Genera un numero al azar que va en el intervalo 1 hasta el numero que el usuario
 * indico y lo devuelve
*/
int numeroAleatorio(int limite){
    //!Inicia el generador de numeros
    srand(time(NULL)); 
    int aleatorio = rand() % limite + 1; /**<El numero aleatorio generado se va a almacenar en esta variable*/
    //!Devuelve el numero aleatorio que se genero
    return aleatorio; 
}

/**Verifica si el numero que la persona ingreso es el numero aleatorio que debe adivinar, lo
 * que hace es comparar el valor ingresado con el numero aleatorio, si son iguales entonces 
 * va a imprimir un mensaje felicitando al usuario, si no lo es le va a indicar que lo intente
 * nuevamente.
*/
int verificacion(int aleatorio, int ingreso, int vidas){
    //! Compara si el numero que se ingreso es el mismo que se genero para que lo adivinara
    if (ingreso = aleatorio){
        //!imprime el mensaje de felicitacion, porque los numeros son los mismos
        cout << "Felicidades:) Ha logrado adivinar el numero!!!"<< ingreso;
        //! devuelve 0 para indicar que ya finalizo
        return 0;
    }
    else{
        //! imprime el mensaje que indica que debe de intentarlo otra vez
        cout << "Vuelva a intentarlo" << endl;
    }
}

/**Esta funcion abre el modo Regular del juego, le permite a la persona*/
void modoRegular(int limite, int ingreso, int vidas){
    int limite; /**<Declara la variable que almacena el numero final del intervalo*/
    //! Imprime los mensajes y solicita que ingrese un numero
    cout << "Ha seleccionado jugar en el modo Regular. :) \n";
    cout << "Ingrese el numero limite del intervalo en el que desea adivinar el numero: ";
    /**Lee el valor ingresado*/
    cin >> limite;
    //!Imprime el mensaje que contiene la informacion sobre el intervalo
    cout << "Debe de adivinar el numero aleatorio que va en el intervalor desde 0 hasta " << limite << endl;

    int random = numeroAleatorio(limite); /**<El numero generado se almacena en esta variable*/
    int vidas = (limite +1) / 3; /**<Calcula el numero de veces que puede intentar y se almacena en la variable*/
    //! Le indica cuantos intentos tiene
    cout << "Su numero de vidas para intentar es de: " << vidas;
    
    //! Ciclo para los intentos del usuario
    for (int i = 1; i < vidas; ++i ){
        int ingreso; /**<Declara la variable que almacena el numero que ingrese el usuario*/
        //! Le indica a la persona cual es el intento por el que va y la persona ingresa un numero intentando adivinar
        cout << "Su intento " << i << ": ";
        //! Lee el valor que se ingreso
        cin >> ingreso;

        //! Se verifica si el intento fue el numero aleatorio o es incorrecto
        if (verificacion(random, ingreso, i)){
            return;
        }
        //! Si el numero es mayor al numero aleatorio se le indica al usuario
        if (ingreso > random){
            cout << "Ha ingresado un numero MAYOR al numero que intenta adivinar";
        }
        //! Si el numero es menor al numero aleatorio se le indica al usuario
        if (ingreso < random){
            cout << "Ha ingresado un numero MENOR al que intenta adivinar";
        }
    }
    //! Si se agotaron las vidas, se le avisa al usuario y cual era el numero aleatorio
    if (vidas = 0){
        cout << "Ha perdido:( \n)";
        cout << "Ha utilizado todas sus vidas, El numero aleatorio era: " << random;  
    }
    
}

/**Esta funcion inicia el modo Desafiante del juego, en este juego se le indica al jugador,
 * si esta al usuario si esta hiviendo en caso de que este muy cerca del numero, que esta 
 * caliente cuando esta bastante cerca, frio cuando esta relativamente lejos y congelado
 * cuando este sumamente lejos del numero que debe adivinar
*/
void modoDesafiante(int limite, int ingreso, int vidas){
    int limite;/**<Declara la variable que almacena el numero final del intervalo*/
    
    //! Imprime los mensajes y solicita que ingrese un numero
    cout << "Ha seleccionado jugar en el modo Regular. :) \n";
    cout << "Ingrese el numero final del intervalo en el que desea adivinar el numero: ";
    /**Lee el valor ingresado*/
    cin >> limite;
    //!Imprime el mensaje que contiene la informacion sobre el intervalo
    cout << "Debe de adivinar el numero aleatorio que va en el intervalor desde 0 hasta " << limite << endl;

    int random = numeroAleatorio(limite); /**<El numero generado se almacena en esta variable*/
    int vidas = (limite +1) / 3; /**<Calcula el numero de veces que puede intentar y se almacena en la variable*/
    //! Le indica cuantos intentos tiene
    cout << "Su numero de vidas para intentar es de: " << vidas;
    
    //! Ciclo para los intentos del usuario
    for (int i = 1; i < vidas; ++i ){
        int ingreso;/**<Declara la variable que almacena el numero que ingrese el usuario*/
        //! Le indica a la persona cual es el intento por el que va y la persona ingresa un numero intentando adivinar
        int aproximacion = abs(random - ingreso); /**<Declara una variable donde se almacena el valor aproximado*/
        //! Le indica a la persona cual intento es por el que va y le solicita su intento
        cout << "Su intento " << i << ": ";
        //! Lee el valor ingresado
        cin >> ingreso;

        //! Se verifica si el intento fue el numero aleatorio o es incorrecto
        if (verificacion(random, ingreso, i)){
            return;
        }
        //! Si el numero que ingreso se aproxima por muy poquito, le indica que esta hirviendo
        if (aproximacion <= 3){
            cout << "Está hirviendo!!!\n";
        }
        //! Si el numero que ingreso se aproxima, le indica que esta caliente
        else if (aproximacion <= 6){
            cout << "Está caliente!!!\n";
        }
        //! Si el numero esta relativamente lejos, le indica que esta frio
        else if (aproximacion <= 10){
            cout << "Está frio!!!\n";
        }
        //! Si el numero esta muy lejos entonces le indica que esta congelado
        else{
            cout << "Está congelado!!\n";
        }
    }
    //! Si se agotaron las vidas, se le avisa al usuario y cual era el numero aleatorio
    if (vidas = 0){
        cout << "Ha perdido:( \n)";
        cout << "Ha utilizado todas sus vidas, El numero aleatorio era: " << random;  
    }
}
