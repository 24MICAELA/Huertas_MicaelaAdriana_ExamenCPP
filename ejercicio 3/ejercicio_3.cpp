#include "ejercicio 3/ejercicio_3.h"
#include <iostream>
using namespace std;

void ejecutarNotas() {
    int totalNotas = 8;
    double nota, suma = 0;

    for (int i = 1; i <= totalNotas; ++i) {
        cout << "Ingresa la calificacion del ejercicio " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    cout << "El promedio de las calificaciones es: " << suma / totalNotas << endl;
}
