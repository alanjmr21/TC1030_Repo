#include "Laboratorio.h"

class LabFisica : public Laboratorio {
private:
    Item objetos[2];
    int indice;
    double respuesta;
    double respuestaCorrecta;
public:
    void Pregunta();
    void iniciarLaboratorio(vector <Item> , vector <Item> );
    void mostrarItemsLab();
};


void LabFisica::Pregunta(){
    cout << "¿Cual es el valor de la gravedad?" <<endl;
    respuestaCorrecta = 9.81;
    cin >> respuesta;

    if (respuesta==respuestaCorrecta){
        cout << "Tu respuesta es correcta!" << endl;
    } else {
        cout << "Tu respuesta es incorrecta" << endl;
    }
}
void LabFisica::iniciarLaboratorio(vector <Item> vecObjetos, vector <Item> vecPartesMaquina){
    indice = getRand();

    objetos[0] = vecObjetos[indice];
    objetos[1] = vecPartesMaquina[indice];

    vecObjetos.erase(vecObjetos.begin()+(indice-1));
    vecPartesMaquina.erase(vecObjetos.begin()+(indice-1));

}

void LabFisica::mostrarItemsLab(){
    for (int i=0; i < 3;i++){
        objetos[i].getDesc();
    };
}