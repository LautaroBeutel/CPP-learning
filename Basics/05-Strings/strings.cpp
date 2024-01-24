/*  En c no tenemos un tipo de dato para almacenar cadenas,
 *  si bien podemos tener arrays de caracteres es engorroso
 *  trabajar con ello.
 *
 *  Sin embargo existe una libreria la cual nos brinda clase
 *  en la cual podemos almacenar cadenas y viene con varios
 *  metodos para trabajar con ellas
 * 
 *  La clase String:
 *      Cada cadena de la clase string que creemos va a ser un
 *      objeto de esa clase
 * */

#include <iostream>
#include <string>
using namespace std;

string saludo = "Hello, World!!!";
string cadena1 = "Programar en c";
string cadena2 = "es divertido.";

int main() {
    cout << saludo << endl;             // retorna el contenido de la cadena
    cout << cadena1 + " " + cadena2 << endl;  // concatenacion de dos cadenas
    cout << cadena1[0] << endl;         // accediendo a un elemento de la cadena
    cout << saludo.length() << endl;            // metodo lenght que devuelve el largo de la cadena
    return 0;
}