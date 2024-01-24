/*  La biblioteca iostream nos ofrece metodos a nuestro programa 
 *  para poder tomar entradas e imprimir salidas en el terminal.
 * 
 *  cin -> solicita una entrada
 *  cout -> imprime una salida en la terminal
 */

#include <iostream>
using namespace std;

int main() {
    int var;

    cout << "ingresa un numero: ";    // mensaje para el usuario
    cin >> var;     // al presionar enter el flujo de datos cae en una variable var

    cout << var << endl;    // imprimir el valor de var

    return 0;
}