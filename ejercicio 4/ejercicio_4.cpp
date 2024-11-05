#include "ejercicio 4/ejercicio_4.h"
#include <iostream>
#include <algorithm>
using namespace std;

void ejecutarPromocion() {
    double precio1, precio2, precio3;
    cout << "Ingresa el precio del primer articulo: ";
    cin >> precio1;
    cout << "Ingresa el precio del segundo articulo: ";
    cin >> precio2;
    cout << "Ingresa el precio del tercer articulo: ";
    cin >> precio3;

    double precios[3] = {precio1, precio2, precio3};
    sort(precios, precios + 3);
    double total = precios[1] + precios[2];

    cout << "El total a pagar bajo la promocion es: " << total << endl;
}
