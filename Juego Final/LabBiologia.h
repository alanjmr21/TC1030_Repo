#include "Laboratorio.h"

class LabBiologia : public Laboratorio {
private:
    Item objetos[2];
    int indice;
    string respuesta;
    string respuestaCorrecta;
    //map <string, string> preguntas;
public:
    void Pregunta();
    void iniciarLaboratorio(vector <Item>, vector <Item>);
    void mostrarItemsLab();
};

void LabBiologia::Pregunta(){
    cout << "¿La celula es la unidad basica de la vida? Responde V o F" <<endl;
    respuestaCorrecta = "V";
    cin >> respuesta;

    if (respuesta==respuestaCorrecta){
        cout << "Tu respuesta es correcta!" << endl;
    } else {
        cout << "Tu respuesta es incorrecta" << endl;
    }
}

void LabBiologia::iniciarLaboratorio(vector <Item> vecObjetos, vector <Item> vecPartesMaquina){
    indice = getRand();

    objetos[0] = vecObjetos[indice];
    objetos[1] = vecPartesMaquina[indice];

    vecObjetos.erase(vecObjetos.begin()+(indice-1));
    vecPartesMaquina.erase(vecObjetos.begin()+(indice-1));
}

void LabBiologia::mostrarItemsLab(){
    for (int i=0; i < 3;i++){
        objetos[i].getDesc();
    };
}