#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

#include "PersonajePrincipal.h"

#include "LabMate.h"
#include "LabFisica.h"
#include "LabBiologia.h"
#include "LabQuimica.h"


int getRand(int i){
    return (rand() % i) + 0;
}

void buscarVectorCalculadora(){

}

int main() {
    // Variables y Vectores para la declaracion alaeatoria de objetos y piezas en laboratorio
    srand((unsigned) time(0));

    vector <Item*> vecObjetos;
    vector <Item*> vecPartesMaquina;
    int tamaño;
    int numero;

    vecObjetos.push_back(new Calculadora());
    vecObjetos.push_back(new Formulario());
    vecObjetos.push_back(new DiagramaBiologia());
    vecObjetos.push_back(new TablaPeriodica());

    vecPartesMaquina.push_back(new Motor());
    vecPartesMaquina.push_back(new Transformador());
    vecPartesMaquina.push_back(new Asiento());
    vecPartesMaquina.push_back(new Computadora());

    PersonajePrincipal J1("Alan");
    
    LabMate Laboratorio1;
    LabBiologia Laboratorio2;
    LabFisica Laboratorio3;
    LabQuimica Laboratorio4;

    // // Variables de Respuestas en el juego (Iniciar, Salir, etc,)
    string opcion;
    int lugar;
    string opcionLab;
    string opcionMaquina;
    string nombreJugador;
    string item;
    int numItem;
    int sizeVectorPersonaje;
    // string opcionLab1;
    // int num_laboratorio;
    string respuesta;
    bool recolectoPieza;

    string codigoSalida;

    //-------------------------------------RANDOMIZAR PARTES DE MAQUINA EN LABORATORIOS-------------------------------
    tamaño = vecPartesMaquina.size()-1;
    numero = getRand(tamaño);
    //cout << tamaño << endl;
    Laboratorio1.iniciarLaboratorio(vecObjetos, vecPartesMaquina, numero);
    vecPartesMaquina.erase(vecPartesMaquina.begin()+numero);
    vecObjetos.erase(vecObjetos.begin()+numero);
    
    // cout << endl;
    // for(int i=0;i<vecPartesMaquina.size();i++){
    //     vecPartesMaquina[i]->getDesc();
    // }
    // cout << endl;

    tamaño = vecPartesMaquina.size()-1;
    numero = getRand(tamaño);
    Laboratorio2.iniciarLaboratorio(vecObjetos, vecPartesMaquina, numero);
    vecPartesMaquina.erase(vecPartesMaquina.begin()+numero);
    vecObjetos.erase(vecObjetos.begin()+numero);

    tamaño = vecPartesMaquina.size()-1;
    numero = getRand(tamaño);
    Laboratorio3.iniciarLaboratorio(vecObjetos, vecPartesMaquina,numero);
    vecPartesMaquina.erase(vecPartesMaquina.begin()+numero);
    vecObjetos.erase(vecObjetos.begin()+numero);
    
    tamaño = 0;
    Laboratorio4.iniciarLaboratorio(vecObjetos, vecPartesMaquina, tamaño);
    vecPartesMaquina.erase(vecPartesMaquina.begin()+0);
    vecObjetos.erase(vecObjetos.begin()+0);

    // ------------------------------------INICIO DEL PROGRAMA ---------------------------------------------------------
    cout << "Presiona I, para iniciar el juego o S, para salir" << endl;
    cin >> opcion;

    if (opcion == "I"){

        cout << "Escribe el nombre de tu personaje" << endl;
        cin.ignore();
        getline(cin, nombreJugador);

        PersonajePrincipal J1(nombreJugador);

        cout << "Bienvendio " << nombreJugador << ", estas en el año 3040, pero necesitas volver al 2019 para prevenir el brote de una pandemia mortal..." << endl;
        usleep(4000000);
        cout << "Tu mision es conseguir las piezas de una maquina del tiempo para poder viajar al pasado\nYo soy el cientifico que te ayudara a encontrarlas ..." << endl;
        usleep(4000000);
        cout << "Las piezas se encuentran distribuidas por 4 laboratorios.\nTendras que entar a cada uno y resolver una pregunta de otros cientificos para recuperarlas ..." << endl;
        usleep(4000000);
        cout << "Cada laboratorio tiene preguntas distintas y es tu objetivo contestarlas correctamente y armar la maquina ..." << endl;
        usleep(4000000);
        cout << "Ve y logra tu mision " << nombreJugador << " !, salva al mundo..." << endl;

        cout << "Generando mapa del juego..." << endl;
        usleep(3000000);

        // cout<<endl;
        // cout << "OBJETIVO: Conseguir las siguientes piezas de la maquina" << endl;
        // cout << "-Motor\n-Transformador\n-Asiento\n-Computadora" << endl;
        // cout << endl;
        // cout<<"Laboratorios"<<endl; 

        // cout<<"|           |           |           |           |"<<endl;
        // cout<<"|           |           |           |           |"<<endl;
        // cout<<"|     1     |     2     |     3     |     4     |"<<endl;
        // cout<<"|           |           |           |           |"<<endl;
        // cout<<"|____  /____|____  /____|____  /____|____ /_____|"<<endl;

        // cout<<endl;
        // cout<<endl;

        // cout<<"TU                                                  Maquina del Tiempo"<<endl;
        // cout<<" o                                                  ^^^^^^^^"<<endl;
        // cout<<"(|)                                                 |o  5  o|"<<endl;
        // cout<<" ll                                                 |_______|"<<endl;

        // cout<<endl;
        // cout<<endl; 
        lugar = 0;
        // cout << endl;
        // cout << "Ubicacion Actual : Lobby\n" << endl; 
        // cout << "¿A donde quieres ir viajero?" << endl;
        // cout << "-Laboratorio (Presiona el numero del laboratorio al que quieres ir: 1,2,3,4)" << endl;
        // cout << "-Maquina del Tiempo" << endl;
        // cout << "-Presiona 6 para salir" << endl;
        

        while (lugar != 6) {

            cout << "Ubicacion Actual : Lobby\n" << endl;
            
            cout<<"Laboratorios"<<endl; 

            cout<<"|           |           |           |           |"<<endl;
            cout<<"|           |           |           |           |"<<endl;
            cout<<"|     1     |     2     |     3     |     4     |"<<endl;
            cout<<"|           |           |           |           |"<<endl;
            cout<<"|____  /____|____  /____|____  /____|____ /_____|"<<endl;

            cout<<endl;
            cout<<endl;

            cout<<"TU                                                  Maquina del Tiempo"<<endl;
            cout<<" o                                                  ^^^^^^^^"<<endl;
            cout<<"(|)                                                 |o  5  o|"<<endl;
            cout<<" ll                                                 |_______|"<<endl;

            cout<<endl;
            cout<<endl; 

            cout << endl; 
            cout << "¿A donde quieres ir viajero?" << endl;
            cout << "-Laboratorio (Presiona el numero del laboratorio al que quieres ir: 1,2,3,4)" << endl;
            cout << "-Maquina del Tiempo (Presiona 5)" << endl;
            cout << "-Presiona 7 para ver inventario" << endl;
            cout << "-Presiona 8 para ver las piezas de la maquina recolectadas" << endl;
            cout << "-Presiona 6 para salir" << endl;

            cin >> lugar;
            opcionLab = "X";
            opcionMaquina = "X";

            if (lugar==1){
                
                J1.entrarLab();
                cout << "Ubicacion Actual : Laboratorio 1\n" << endl;
                cout << endl;
                cout << "Objetivo: Obtener la Pieza con la Calculadora\n" << endl;

                cout <<"|           |           |           |           |"<< endl;
                cout <<"|     TU    |           |           |           |"<< endl;
                cout <<"|     o     |     2     |     3     |     4     |"<< endl;
                cout <<"|    (|)    |           |           |           |"<< endl;
                cout <<"|____ ll ___|____ /_____|____  /____|____  /____|"<< endl;


                cout <<"                                                Maquina del Tiempo"<< endl;
                cout <<"                                                ^^^^^^^^"<< endl;
                cout <<"                                                |o  5  o|"<< endl;
                cout <<"                                                |_______|"<< endl;
                
                while (opcionLab != "L"){
                    cout << "¿Que deseas hacer viajero?" << endl;
                    cout << "-Ver los items del laboratorio (Presiona I)" << endl;
                    cout << "-Contestar la pregunta del cientifico (Presiona P)" << endl;
                    cout << "-Volver al lobby (Presiona L)" << endl;

                    cin >> opcionLab;

                    if (opcionLab=="I"){
                        Laboratorio1.mostrarItemsLab();
                        cout << "¿Deseas agarra un item? S / N" << endl;
                        cin >> item;

                        if (item == "S"){
                            cout << "Selecciona el item que quieres (Escribe su numero de lista)" << endl;
                            Laboratorio1.mostrarItemsLab();

                            cin >> numItem;

                            if (numItem == 0){
                                J1.agregarObjetoLab(Laboratorio1.getObjetoLab());
                            } else if (numItem==1){
                                cout << "Para obtener esta pieza, tiene que contestar la pregunta del cientifico" << endl;
                            }

                        } else if (item == "N") {
                            opcion = "Z"; // solo para volver al loop
                        }
                    } else if (opcionLab == "P"){
                        if (J1.getVecSize() == 0){
                            cout << nombreJugador << " tu inventario esta vacio, debes recolectar la cacluladora primero para que se te permita contestar la pregunta.."<<endl;
                        } else if (J1.getVecSize() != 0){
                            for (int i=0; i < J1.getVecSize(); i++){
                                if(J1.getDescItem(i)=="+Calculadora Cientifica"){
                                    Laboratorio1.getPregunta();

                                    if(Laboratorio1.getRespuestaCorrecta()==J1.contestarInt()){
                                        if(Laboratorio1.getSizeVector()==1){
                                            cout << "Ya recolectaste esta pieza viajero" << endl;
                                        } else {
                                            J1.agregarPiezaMaquina(Laboratorio1.getParteMaquina());
                                        }
                                    } else {
                                        cout << "Tu respuesta es incorrecta viajero, no puedo otorgarte la pieza" << endl;
                                    }

                                    break;
   
                                } else {
                                    if(i == J1.getVecSize()-1){
                                        cout << "\nNo has recolectado la calculadora, no puedes responder de este laboratorio" << endl;
                                    } else {
                                        continue;
                                    }
                                }
                            }
                        }
                        
                    } else if (opcionLab == "L"){
                        J1.salirLab();
                    }
                }
                
            } else if (lugar==2){

                J1.entrarLab();
                cout << "Ubicacion Actual : Laboratorio 2\n" << endl;
                cout << endl;
                cout << "Objetivo: Obtener la Pieza con el Diagrama de Biologia\n" << endl;

                cout <<"|           |           |           |           |"<< endl;
                cout <<"|           |    TU     |           |           |"<< endl;
                cout <<"|     1     |     o     |     3     |     4     |"<< endl;
                cout <<"|           |    (|)    |           |           |"<< endl;
                cout <<"|____   /___|____ ll____|____  /____|____  /____|"<< endl;


                cout <<"                                                Maquina del Tiempo"<< endl;
                cout <<"                                                ^^^^^^^^"<< endl;
                cout <<"                                                |o  5  o|"<< endl;
                cout <<"                                                |_______|"<< endl;

                while (opcionLab != "L"){
                    cout << "¿Que deseas hacer viajero?" << endl;
                    cout << "-Ver los items del laboratorio (Presiona I)" << endl;
                    cout << "-Contestar la pregunta del cientifico (Presiona P)" << endl;
                    cout << "-Volver al lobby (Presiona L)" << endl;

                    cin >> opcionLab;

                    if (opcionLab=="I"){
                        Laboratorio2.mostrarItemsLab();
                        cout << "¿Deseas agarra un item? S / N" << endl;
                        cin >> item;

                        if (item == "S"){
                            cout << "Selecciona el item que quieres (Escribe su numero de lista)" << endl;
                            Laboratorio2.mostrarItemsLab();

                            cin >> numItem;

                            if (numItem == 0){
                                J1.agregarObjetoLab(Laboratorio2.getObjetoLab());
                            } else if (numItem==1){
                                cout << "Para obtener esta pieza, tiene que contestar la pregunta del cientifico" << endl;
                            }

                        } else if (item == "N") {
                            opcion = "Z"; // solo para volver al loop
                        }
                    } else if (opcionLab == "P"){
                        if (J1.getVecSize() == 0){
                            cout << nombreJugador << " tu inventario esta vacio, debes recolectar la cacluladora primero para que se te permita contestar la pregunta.."<<endl;
                        } else if (J1.getVecSize() != 0){
                            for (int i=0; i < J1.getVecSize(); i++){
                                if(J1.getDescItem(i)=="+Diagrama de Biologia - Celula"){
                                    Laboratorio2.getPregunta();

                                    if(Laboratorio2.getRespuestaCorrecta()==J1.contestarString()){
                                        if(Laboratorio2.getSizeVector()==1){
                                            cout << "Ya recolectaste esta pieza viajero" << endl;
                                        } else {
                                            J1.agregarPiezaMaquina(Laboratorio2.getParteMaquina());
                                        }
                                    } else {
                                        cout << "Tu respuesta es incorrecta viajero, no puedo otorgarte la pieza" << endl;
                                    }

                                    break;
   
                                } else {
                                    if(i == J1.getVecSize()-1){
                                        cout << "\nNo has recolectado el Diagrama de Biologia - Celula, no puedes responder de este laboratorio" << endl;
                                    } else {
                                        continue;
                                    }
                                }
                            }
                        }
                        
                    } else if (opcionLab == "L"){
                        J1.salirLab();
                    }
                }

            } else if (lugar==3){

                J1.entrarLab();
                cout << "Ubicacion Actual : Laboratorio 3\n" << endl;
                cout << endl;
                cout << "Objetivo: Obtener la Pieza con el Formulario de Fisica\n" << endl;

                cout <<"|           |           |           |           |"<< endl;
                cout <<"|           |           |    TU     |           |"<< endl;
                cout <<"|     1     |     2     |     o     |     4     |"<< endl;
                cout <<"|           |           |    (|)    |           |"<< endl;
                cout <<"|____   /___|____  /____|____ ll____|____  /____|"<< endl;


                cout <<"                                                Maquina del Tiempo"<< endl;
                cout <<"                                                ^^^^^^^^"<< endl;
                cout <<"                                                |o  5  o|"<< endl;
                cout <<"                                                |_______|"<< endl;

                while (opcionLab != "L"){
                    cout << "¿Que deseas hacer viajero?" << endl;
                    cout << "-Ver los items del laboratorio (Presiona I)" << endl;
                    cout << "-Contestar la pregunta del cientifico (Presiona P)" << endl;
                    cout << "-Volver al lobby (Presiona L)" << endl;

                    cin >> opcionLab;

                    if (opcionLab=="I"){
                        Laboratorio3.mostrarItemsLab();
                        cout << "¿Deseas agarra un item? S / N" << endl;
                        cin >> item;

                        if (item == "S"){
                            cout << "Selecciona el item que quieres (Escribe su numero de lista)" << endl;
                            Laboratorio3.mostrarItemsLab();

                            cin >> numItem;

                            if (numItem == 0){
                                J1.agregarObjetoLab(Laboratorio3.getObjetoLab());
                            } else if (numItem==1){
                                cout << "Para obtener esta pieza, tiene que contestar la pregunta del cientifico" << endl;
                            }

                        } else if (item == "N") {
                            opcion = "Z"; // solo para volver al loop
                        }
                    } else if (opcionLab == "P"){
                        if (J1.getVecSize() == 0){
                            cout << nombreJugador << " tu inventario esta vacio, debes recolectar la cacluladora primero para que se te permita contestar la pregunta.."<<endl;
                        } else if (J1.getVecSize() != 0){
                            for (int i=0; i < J1.getVecSize(); i++){
                                if(J1.getDescItem(i)=="+Formulario de Fisica"){
                                    Laboratorio3.getPregunta();

                                    if(Laboratorio3.getRespuestaCorrecta()==J1.contestarDouble()){
                                        if(Laboratorio3.getSizeVector()==1){
                                            cout << "Ya recolectaste esta pieza viajero" << endl;
                                        } else {
                                            J1.agregarPiezaMaquina(Laboratorio3.getParteMaquina());
                                        }
                                    } else {
                                        cout << "Tu respuesta es incorrecta viajero, no puedo otorgarte la pieza" << endl;
                                    }

                                    break;
   
                                } else {
                                    if(i == J1.getVecSize()-1){
                                        cout << "\nNo has recolectado el Formulario de Fisica, no puedes responder de este laboratorio" << endl;
                                    } else {
                                        continue;
                                    }
                                }
                            }
                        }
                        
                    } else if (opcionLab == "L"){
                        J1.salirLab();
                    }
                }

            } else if (lugar == 4){

                J1.entrarLab();
                cout << "Ubicacion Actual : Laboratorio 4\n" << endl;
                cout << endl;
                cout << "Objetivo: Obtener la Pieza con Tabla Periodica\n" << endl;

                cout <<"|           |           |           |           |"<< endl;
                cout <<"|           |           |           |     TU    |"<< endl;
                cout <<"|     1     |     2     |     3     |      o    |"<< endl;
                cout <<"|           |           |           |     (|)   |"<< endl;
                cout <<"|____   /___|____  /____|____  /____|____  ll___|"<< endl;


                cout <<"                                                Maquina del Tiempo"<< endl;
                cout <<"                                                ^^^^^^^^"<< endl;
                cout <<"                                                |o  5  o|"<< endl;
                cout <<"                                                |_______|"<< endl;

                while (opcionLab != "L"){
                    cout << "¿Que deseas hacer viajero?" << endl;
                    cout << "-Ver los items del laboratorio (Presiona I)" << endl;
                    cout << "-Contestar la pregunta del cientifico (Presiona P)" << endl;
                    cout << "-Volver al lobby (Presiona L)" << endl;

                    cin >> opcionLab;

                    if (opcionLab=="I"){
                        Laboratorio4.mostrarItemsLab();
                        cout << "¿Deseas agarra un item? S / N" << endl;
                        cin >> item;

                        if (item == "S"){
                            cout << "Selecciona el item que quieres (Escribe su numero de lista)" << endl;
                            Laboratorio4.mostrarItemsLab();

                            cin >> numItem;

                            if (numItem == 0){
                                J1.agregarObjetoLab(Laboratorio4.getObjetoLab());
                            } else if (numItem==1){
                                cout << "Para obtener esta pieza, tiene que contestar la pregunta del cientifico" << endl;
                            }

                        } else if (item == "N") {
                            opcion = "Z"; // solo para volver al loop
                        }
                    } else if (opcionLab == "P"){
                        if (J1.getVecSize() == 0){
                            cout << nombreJugador << " tu inventario esta vacio, debes recolectar la cacluladora primero para que se te permita contestar la pregunta.."<<endl;
                        } else if (J1.getVecSize() != 0){
                            for (int i=0; i < J1.getVecSize(); i++){
                                if(J1.getDescItem(i)=="+Tabla Periodica con Signos de Elementos"){
                                    Laboratorio4.getPregunta();

                                    if(Laboratorio4.getRespuestaCorrecta()==J1.contestarString()){
                                        if(Laboratorio4.getSizeVector()==1){
                                            cout << "Ya recolectaste esta pieza viajero" << endl;
                                        } else {
                                            J1.agregarPiezaMaquina(Laboratorio4.getParteMaquina());
                                        }
                                    } else {
                                        cout << "Tu respuesta es incorrecta viajero, no puedo otorgarte la pieza" << endl;
                                    }

                                    break;
   
                                } else {
                                    if(i == J1.getVecSize()-1){
                                        cout << "\nNo has recolectado la Tabla Periodica, no puedes responder de este laboratorio" << endl;
                                    } else {
                                        continue;
                                    }
                                }
                            }
                        }
                        
                    } else if (opcionLab == "L"){
                        J1.salirLab();
                    }
                }

            } else if (lugar == 5) {

                cout << "Ubicacion Actual : Maquina del Tiempo\n" << endl;

                cout<<"Laboratorios"<<endl; 

                cout<<"|           |           |           |           |"<<endl;
                cout<<"|           |           |           |           |"<<endl;
                cout<<"|     1     |     2     |     3     |     4     |"<<endl;
                cout<<"|           |           |           |           |"<<endl;
                cout<<"|____  /____|____  /____|____  /____|____ /_____|"<<endl;

                cout<<endl;
                cout<<endl;

                cout<<"                                                TU  Maquina del Tiempo"<<endl;
                cout<<"                                                 o  ^^^^^^^^"<<endl;
                cout<<"                                                (|) |o  5  o|"<<endl;
                cout<<"                                                 ll |_______|"<<endl;

                cout<<endl;
                cout<<endl; 

                while (opcionMaquina != "L"){
                    cout << "¿Que deseas hacer viajero?" << endl;
                    cout << "-Activar Maquina del Tiempo (Presiona A)" << endl;
                    cout << "-Volver al lobby (Presiona L)" << endl;

                    cin >> opcionMaquina;

                    if(opcionMaquina=="A"){
                        if (J1.getVecSizeMaquina()==0){
                            cout << "No puedes activar la maquina, tu inventaro de piezas esta vacio" << endl;
                        } else if (J1.getVecSizeMaquina() != 0) { 
                            if (J1.getVecSizeMaquina() == 4) {
                                cout << "Armando Maquina..." << endl;
                                usleep(3000000);

                                cout << nombreJugador << ", has logrado tu objetivo!, pero sigue la parte mas importante..." << endl;
                                usleep(2000000);
                                cout << "Deberas volver a Noviembre del 2019 y salvar al mundo de una enfermada reportada como Covid-19..." << endl;
                                usleep(3000000);
                                
                                cout << "Como utlimo requisto, te pedire que ingreses la contraseña de activacion: LINEA-501267 y despues viajaras en el tiempo..." << endl;
                                while (codigoSalida != "LINEA-501267"){
                                    
                                    cin >> codigoSalida;

                                    if (codigoSalida == "LINEA-501267"){
                                        cout << "Viajando al pasado..." << endl;
                                        usleep(2000000);
                                        cout << "Un ultimo mensaje viajero, recuerda que todo lo que hagas alla, cambiara el curso de la historia actual, se cuidadoso..."<<endl;
                                        usleep(4000000);
                                        cout << "Perdiendo conexion..." << endl;
                                        usleep(2000000);

                                        cout << "Has ganado el juego, proximamente parte 2...";
                                        exit(0);
                                    }

                                    cout << "Respuesta incorrecta, intentelo mas tarde" << endl;
                                    
                                }

                            } else {
                                cout << "Aun no has recolectado todas las piezas, buscalas en los laboratorios" << endl;
                            }
                        }
                    }
                }
            } else if (lugar == 6){
                break;
            } else if (lugar == 7){
                J1.verItems();

            }else if (lugar == 8){
                J1.verPiezasMaquina();
            }
        }
    }

   return 0;

};