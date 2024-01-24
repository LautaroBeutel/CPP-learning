/*  Las variables son un espacio de memoria reservado para
 *  almacenar valores necesarios para la ejecucion del programa.
 *
 *  Las variables son como contenedores y dentro de estos contenedores
 *  podemos meter cosas que nos interesen guardar para utilizar posteriormente
 * 
 *  Hay distintos tipos de variables primitivos de c++:
 *      - int: enteros, almacenan numeros   ()
 *      - float: variables de coma flotante   ()
 *      - double: son variables de coma flotante con mayor numeros de decimales
 *      - char: almacenan caracteres    (1 byte)
 *      - boolean: almacenan true o false
 * 
 */

#include <iostream>
using namespace std;

// Las variables existen en el entorno en el que son definidas
// por lo que las variables creadas en el entorno global del programa
// son variables globales y pueden ser llamadas desde cualquier lado 
// del programa

int varGlobal = 10;

int main() {
    int varLocal = 20; // Las variables locales no pueden ser llamadas fueras del entorno

    cout << varGlobal << endl;
    cout << varLocal << endl;
    
    return 0;
}