#ifndef Laboratorio_h
#define Laboratorio_h

class Laboratorio {
protected:
/*
    Calculadora calculadora;
    Formulario formulario;
    DiagramaBiologia diagrama;
    TablaPeriodica tablaP;

    Motor motor;
    Transformador transformador;
    Asiento silla;
    Computadora compu;
*/
    string respuestaCorrecta;
    string respuesta;

public:
    virtual void Pregunta();
    virtual void iniciarLaboratorio(vector <Item> ob, vector <Item> P);
    virtual void mostrarItemsLab();
    void agregarObjetos();
    void agregarPartesMaquina();
    int getRand();

};

void Laboratorio::Pregunta(){
    cout <<"No tengo pregunta" <<endl;
    respuestaCorrecta = "Vacio";

}
/*
void Laboratorio::agregarObjetos(){
    vecObjetos.push_back(calculadora);
    vecObjetos.push_back(formulario);
    vecObjetos.push_back(diagrama);
    vecObjetos.push_back(tablaP);

}
void Laboratorio::agregarPartesMaquina(){
    vecPartesMaquina.push_back(motor);
    vecPartesMaquina.push_back(silla);
    vecPartesMaquina.push_back(transformador);
    vecPartesMaquina.push_back(compu);
}
*/
void Laboratorio::iniciarLaboratorio(vector <Item> ob, vector <Item> piezas){
    cout << "Laboratorio vacio" << endl;
}

int Laboratorio::getRand(){
    return (rand() % 4) + 1;
}

void Laboratorio::mostrarItemsLab(){
    cout << "No hay nada que mostrar" << endl;
}


#endif

