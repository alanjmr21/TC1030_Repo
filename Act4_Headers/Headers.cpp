#include <iostream>
#include <string>
#include "Persona.h"
#include "Estudiante.h"
#include "Maestro.h"

using namespace std;

int main() {
    
    Estudiante est[2];
    Maestro maestro[2];

    Estudiante e1("Alan Muñoz",19,"ITC");
    Estudiante e2("Perla Tapia",19, "ARQ");

    est[0]=e1;
    est[1]=e2;

    Maestro m1("Miss Rosy",26,"Frances");
    Maestro m2("Miss Maribel",40,"Quimica");

    maestro[0]=m1;
    maestro[1]=m2;

    est[0].muestraDatos();
    est[1].muestraDatos();

    maestro[0].muestra_datos();
    maestro[1].muestra_datos();

    return 0;
};