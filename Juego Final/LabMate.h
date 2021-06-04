#include "Laboratorio.h"

class LabMate : public Laboratorio {
private:
    Item objetos[2];
    int indice;
    int respuesta;
    int respuestaCorrecta;
public:
    void Pregunta();
    void iniciarLaboratorio(vector <Item> , vector <Item> );
    void mostrarItemsLab();
};


void LabMate::Pregunta(){
    cout << "¿Cuanto es (5+5)*(3/3)?" <<endl;
    respuestaCorrecta = 10;
    cin >> respuesta;

    if (respuesta==respuestaCorrecta){
        cout << "Tu respuesta es correcta!" << endl;
    } else {
        cout << "Tu respuesta es incorrecta" << endl;
    }
}
void LabMate::iniciarLaboratorio(vector <Item> vecObjetos, vector <Item> vecPartesMaquina){
    indice = getRand();

    objetos[0] = vecObjetos[indice];
    objetos[1] = vecPartesMaquina[indice];

    vecObjetos.erase(vecObjetos.begin()+(indice-1));
    vecPartesMaquina.erase(vecObjetos.begin()+(indice-1));
}

void LabMate::mostrarItemsLab(){
    for (int i=0; i < 3;i++){
        objetos[i].getDesc();
    };
}