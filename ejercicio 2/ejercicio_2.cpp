#include "ejercicio 2/ejercicio_2.h"
#include <iostream>
using namespace std;

void ejecutarDia() {
    int dia;
    cout << "Ingresa un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Numero invalido." << endl; break;
    }
}

