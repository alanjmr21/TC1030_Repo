#include "Laboratorio.h"

class LabMate : public Laboratorio {
private:
    vector <Item*> vecObjetosLab;
    int indice;
    int respuestaCorrecta;
public:
    LabMate();

    Item *getParteMaquina();
    Item *getObjetoLab();

    string getPregunta();
    int getRespuestaCorrecta();
    int getSizeVector();

    void iniciarLaboratorio(vector <Item*>, vector <Item*>, int);
    void mostrarItemsLab();
};
LabMate::LabMate() : Laboratorio(){
    pregunta = "¿Cuanto es (5+5)*(3/3)?";
    respuestaCorrecta = 10;
}

string LabMate::getPregunta(){
    cout << pregunta << endl;
    return pregunta;
}

int LabMate::getRespuestaCorrecta(){
    return respuestaCorrecta;
}

void LabMate::iniciarLaboratorio(vector <Item*> vecObjetos, vector <Item*> vecPartesMaquina, int i){

    //vecObjetosLab = vecObjetos;
    
    indice = i;

    vecObjetosLab.push_back(vecObjetos[indice]);
    vecObjetosLab.push_back(vecPartesMaquina[indice]);
}

void LabMate::mostrarItemsLab(){
    for (int i=0;i<vecObjetosLab.size();i++){
        cout << i << " ";
        vecObjetosLab[i]->getDesc();
    }
    cout << endl;
}

Item *LabMate::getParteMaquina(){
    piezaMaquina = vecObjetosLab[1];
    vecObjetosLab.erase(vecObjetosLab.begin()+1);
    return piezaMaquina;
}
Item *LabMate::getObjetoLab(){
    objetoLab = vecObjetosLab[0];
    return objetoLab;
}
int LabMate::getSizeVector(){
    return vecObjetosLab.size();
}