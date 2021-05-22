#include <iostream>
#include "Operacion.h"
#include "Resta.h"
#include "Suma.h"

using namespace std;

int main() {
    Suma suma;
    Resta resta;

    int v1;
    int v2;
    int multiplicacion;
    
    cout << "Ingrese los numeros a sumar\n";

    suma.cargar1();
    suma.cargar2();

    suma.operar();
    v1 = suma.mostrarResultado();

    cout << "Ingrese los numeros a restar\n";
    resta.cargar1();
    resta.cargar2();

    resta.operar();
    v2 = resta.mostrarResultado();

    multiplicacion = v1 * v2;

    cout << "La multiplicacion de sus resltados es " << multiplicacion << endl;

};

