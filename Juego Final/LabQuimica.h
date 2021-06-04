#include "Laboratorio.h"

class LabQuimica : public Laboratorio {
private:
    Item objetos[2];
    int indice;
    string respuesta;
    string respuestaCorrecta;
public:
    void Pregunta();
    void iniciarLaboratorio(vector <Item> , vector <Item> );
    void mostrarItemsLab();
};


void LabQuimica::Pregunta(){
    cout << "¿Cual es el signo del Hierro en la Tabla Periodica?" <<endl;
    respuestaCorrecta = "He";
    cin >> respuesta;

    if (respuesta==respuestaCorrecta){
        cout << "Tu respuesta es correcta!" << endl;
    } else {
        cout << "Tu respuesta es incorrecta" << endl;
    }
}

void LabQuimica::iniciarLaboratorio(vector <Item> vecObjetos, vector <Item> vecPartesMaquina){
    indice = getRand();

    objetos[0] = vecObjetos[indice];
    objetos[1] = vecPartesMaquina[indice];

    vecObjetos.erase(vecObjetos.begin()+(indice-1));
    vecPartesMaquina.erase(vecObjetos.begin()+(indice-1));
}

void LabQuimica::mostrarItemsLab(){
    for (int i=0; i < 3;i++){
        objetos[i].getDesc();
    };
}