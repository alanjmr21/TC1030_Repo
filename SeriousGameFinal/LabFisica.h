#include "Laboratorio.h"

class LabFisica : public Laboratorio {
private:
    vector <Item*> vecObjetosLab;
    int indice;
    double respuestaCorrecta;
public:
    LabFisica();

    Item *getParteMaquina();
    Item *getObjetoLab();

    string getPregunta();
    double getRespuestaCorrecta();
    int getSizeVector();

    void iniciarLaboratorio(vector <Item*>, vector <Item*>, int);
    void mostrarItemsLab();
};

LabFisica::LabFisica() : Laboratorio(){
    pregunta = "¿Cual es el valor de la gravedad?";
    respuestaCorrecta = 9.81;
}

string LabFisica::getPregunta(){
    cout << pregunta << endl;
    return pregunta;
}

double LabFisica::getRespuestaCorrecta(){
    return respuestaCorrecta;
}

void LabFisica::iniciarLaboratorio(vector <Item*> vecObjetos, vector <Item*> vecPartesMaquina, int i){
    //vecObjetosLab = vecObjetos;
    
    indice = i;
    vecObjetosLab.push_back(vecObjetos[indice]);
    vecObjetosLab.push_back(vecPartesMaquina[indice]);
}


void LabFisica::mostrarItemsLab(){
    for (int i=0;i<vecObjetosLab.size();i++){
        cout << i << " ";
        vecObjetosLab[i]->getDesc();
    }
    cout << endl;
}

Item *LabFisica::getParteMaquina(){
    piezaMaquina = vecObjetosLab[1];
    vecObjetosLab.erase(vecObjetosLab.begin()+1);
    return piezaMaquina;
}
Item *LabFisica::getObjetoLab(){
    objetoLab = vecObjetosLab[0];
    return objetoLab;
}
int LabFisica::getSizeVector(){
    return vecObjetosLab.size();
}