#include "Persona.h"

class Estudiante: public Persona {
    public:
        Estudiante();
        Estudiante(string, int, string);
        string getCarrera();
        void muestraDatos();

    private:
        string carrera;

};

Estudiante::Estudiante() : Persona() {
    nombre = "nobody";
    edad = 0;
    carrera = "ninguna";
};
Estudiante::Estudiante(string n, int e, string c) : Persona(n, e) {
    nombre = n;
    edad = e;
    carrera = c;
};

string Estudiante::getCarrera(){
    return carrera;
};

void Estudiante::muestraDatos(){
    cout << "Nombre   Edad   Carrera " << endl;
    cout << nombre <<"   "<< edad << "    " << carrera<<endl;
};