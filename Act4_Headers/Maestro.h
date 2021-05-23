#include "Persona.h"

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        string get_depto(){return depto;};
        void muestra_datos();
    private:
        string depto;
};

Maestro::Maestro() : Persona(){
    depto = "Ninguno";
};

Maestro::Maestro(string n, int e, string d) : Persona(n, e){
    depto = d;
};

void Maestro::muestra_datos(){
    cout<<"Nombre\t\tEdad\tDepartamento"<<endl; 
    cout<< nombre << "\t" <<edad<<"\t"<<depto << endl;
};