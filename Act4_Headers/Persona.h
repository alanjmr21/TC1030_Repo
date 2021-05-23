#ifndef Persona_h
#define Persona_h

using namespace std;

class Persona {
    public:
        Persona();
        Persona(string, int);
        string getNombre();
        int getEdad();

    protected:
        string nombre;
        int edad;
};

Persona::Persona(){
    nombre = "ninguno";
    edad = 0;
};
Persona::Persona(string n, int e){
    nombre = n;
    edad = e;
};

string Persona::getNombre(){
    return nombre;
};

int Persona::getEdad(){
    return edad;
};

#endif