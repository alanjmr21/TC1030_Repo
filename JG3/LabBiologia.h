#include "Laboratorio.h"


class LabBiologia : public Laboratorio {
private:
    vector <Item*> vecObjetosLab;
    int indice;
    string respuestaCorrecta;
public:
    LabBiologia();

    Item *getParteMaquina();
    Item *getObjetoLab();
    
    string getPregunta();
    string getRespuestaCorrecta();
    int getSizeVector();

    void iniciarLaboratorio(vector <Item*>, vector <Item*>,int);
    void mostrarItemsLab();

};
LabBiologia::LabBiologia() : Laboratorio(){
    pregunta = "¿La celula es la unidad basica de la vida? Responde V o F";
    respuestaCorrecta = "V";
}
string LabBiologia::getPregunta(){
    cout << pregunta << endl;
    return pregunta;
}

string LabBiologia::getRespuestaCorrecta(){
    return respuestaCorrecta;
}

void LabBiologia::iniciarLaboratorio(vector <Item*> vecObjetos, vector <Item*> vecPartesMaquina, int i){
    //vecObjetosLab = vecObjetos;

    indice = i;
    vecObjetosLab.push_back(vecObjetos[indice]);
    vecObjetosLab.push_back(vecPartesMaquina[indice]);
}


void LabBiologia::mostrarItemsLab(){
    for (int i=0;i<vecObjetosLab.size();i++){
        cout << i << " ";
        vecObjetosLab[i]->getDesc();
        
    }
    cout << endl;
    
}

Item *LabBiologia::getParteMaquina(){
    piezaMaquina = vecObjetosLab[1];
    vecObjetosLab.erase(vecObjetosLab.begin()+1);
    return piezaMaquina;
}
Item *LabBiologia::getObjetoLab(){
    objetoLab = vecObjetosLab[0];
    return objetoLab;
}
int LabBiologia::getSizeVector(){
    return vecObjetosLab.size();
}