#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

using namespace std;

#include "PersonajePrincipal.h"

#include "LabMate.h"
#include "LabFisica.h"
#include "LabBiologia.h"
#include "LabQuimica.h"



int main() {

    Calculadora calculadora;
    Formulario formulario;
    DiagramaBiologia diagrama;
    TablaPeriodica tablaP;

    Motor motor;
    Transformador transformador;
    Asiento silla;
    Computadora compu;
    
    LabMate Laboratorio1;
    LabBiologia Laboratorio2;
    LabFisica Laboratorio3;
    LabQuimica Laboratorio4;

    vector <Item> vecObjetos;
    vector <Item> vecPartesMaquina;

    vecObjetos.push_back(calculadora);
    vecObjetos.push_back(formulario);
    vecObjetos.push_back(tablaP);
    vecObjetos.push_back(diagrama);

    vecPartesMaquina.push_back(motor);
    vecPartesMaquina.push_back(transformador);
    vecPartesMaquina.push_back(silla);
    vecPartesMaquina.push_back(compu);

/*
    Laboratorio1.Pregunta();
    Laboratorio2.Pregunta();
    Laboratorio3.Pregunta();
    Laboratorio4.Pregunta();

    PersonajePrincipal alan;

    alan.agregarCalculadora();
    alan.agregarFormulario();
    alan.agregarTablaP();
    alan.agregarDiagrama();

    alan.verItems();
*/

    Laboratorio1.iniciarLaboratorio(vecObjetos,vecPartesMaquina);
    Laboratorio2.iniciarLaboratorio(vecObjetos,vecPartesMaquina);
    Laboratorio3.iniciarLaboratorio(vecObjetos,vecPartesMaquina);
    Laboratorio4.iniciarLaboratorio(vecObjetos,vecPartesMaquina);

    Laboratorio1.mostrarItemsLab();
    Laboratorio2.mostrarItemsLab();
    Laboratorio3.mostrarItemsLab();
    Laboratorio4.mostrarItemsLab();

    tablaP.getDesc();
    calculadora.getDesc();

   

};