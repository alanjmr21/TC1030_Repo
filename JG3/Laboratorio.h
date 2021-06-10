#ifndef Laboratorio_h
#define Laboratorio_h

class Laboratorio {
protected:
    vector <Item*> vecObjetosLab;
    string respuestaCorrecta;
    string pregunta;    
    string respuesta;
    Item* piezaMaquina;
    Item* objetoLab;

public:
    Laboratorio();

    virtual string getPregunta();
    Item *getParteMaquina();

    virtual void iniciarLaboratorio(vector <Item*>, vector <Item*>,int);
    virtual void mostrarItemsLab();

};
Laboratorio::Laboratorio(){
    pregunta="Ninguna";
    respuestaCorrecta = "No hay";
}

string Laboratorio::getPregunta(){
    return "No tengo pregunta";

}

void Laboratorio::iniciarLaboratorio(vector <Item*>, vector <Item*>,int){
    cout << "Laboratorio vacio" << endl;
}

void Laboratorio::mostrarItemsLab(){
    cout << "No hay nada que mostrar" << endl;
}


#endif

