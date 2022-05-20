#include "Laboratorio.h"

class LabQuimica : public Laboratorio {
private:
    vector <Item*> vecObjetosLab;
    int indice;
    string respuesta;
    string respuestaCorrecta;
public:
    LabQuimica();

    Item *getParteMaquina();
    Item *getObjetoLab();

    string getPregunta();
    string getRespuestaCorrecta();
    int getSizeVector();

    void iniciarLaboratorio(vector <Item*>, vector <Item*>, int);
    void mostrarItemsLab();
};
LabQuimica::LabQuimica() : Laboratorio(){
    pregunta = "¿Cual es el signo del Hierro en la Tabla Periodica?";
    respuestaCorrecta = "He";
}
string LabQuimica::getPregunta(){
    cout << pregunta << endl;
    return pregunta;
}

string LabQuimica::getRespuestaCorrecta(){
    return respuestaCorrecta;
}


void LabQuimica::iniciarLaboratorio(vector <Item*> vecObjetos, vector <Item*> vecPartesMaquina, int i){

    //vecObjetosLab = vecObjetos;
    
    indice = i;
    vecObjetosLab.push_back(vecObjetos[indice]);
    vecObjetosLab.push_back(vecPartesMaquina[indice]);
}

void LabQuimica::mostrarItemsLab(){
    for (int i=0;i<vecObjetosLab.size();i++){
        cout << i << " ";
        vecObjetosLab[i]->getDesc();
    }
    cout << endl;
}
Item *LabQuimica::getParteMaquina(){
    piezaMaquina = vecObjetosLab[1];
    vecObjetosLab.erase(vecObjetosLab.begin()+1);
    return piezaMaquina;
}
Item *LabQuimica::getObjetoLab(){
    objetoLab = vecObjetosLab[0];
    return objetoLab;
}
int LabQuimica::getSizeVector(){
    return vecObjetosLab.size();
}
