/**
 * @file containersMap.cpp
 * @author jesyrivera (you@domain.com)
 * @brief archivo contiene ejemplo de Contenedor Map
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <map>
using namespace std;

int main(){
    /**
     * @brief map <type> name
     */
    map <int, string> student; /**<Declara un mapa*/
    /**
     * @brief Los keys deben de ser unicos, los values si se pueden repetir
     * 
     */
    student[1]= "Jacqueline"; /**<Se le asigna valores a key 1*/
    student[2]= "Blake";/**<Se le asigna valores a key 2*/

    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    student[5]= "Timothy"; /**<Se agrega key and value 5 al mapa*/
    student[5]= "Aaron";/**<Esto le cae encima a lo que ya esta antes*/

    for (int i = 1; i <= student.size(); ++i){ /**<Bucle para iterar entre cada key and value del mapa*/
        /**
         * @brief Se imprime Student[key]: value de cada elemento del mapa
         * 
         */
        cout << "Student[" << i << "]: " << student[i] << endl;
    }
    return 0;

}