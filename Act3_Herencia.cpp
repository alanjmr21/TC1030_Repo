#include <iostream>
#include <string>

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
Estudiante::Estudiante(string n, int e, string c) : Persona() {
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

int main() {

    Estudiante est[2];
    Maestro maestro[2];

    Estudiante e1("Alan Muñoz",19,"ITC");
    Estudiante e2("Perla Tapia",19, "ARQ");

    est[0]=e1;
    est[1]=e2;

    Maestro m1("Miss Rosy",26,"Frances");
    Maestro m2("Miss Maribel",40,"Quimica");

    maestro[0]=m1;
    maestro[1]=m2;

    est[0].muestraDatos();
    est[1].muestraDatos();

    maestro[0].muestra_datos();
    maestro[1].muestra_datos();

    return 0;
};