#include "ejercicio 1/ejercicio_1.h"
#include <iostream>
using namespace std;

void ejecutarNumeros() {
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }
}
