#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string getNombre();
        int getEdad();

    protected:
        string nombre;
        int edad;
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

int main() {

    string nombre;
    string carrera;
    int edad;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;

    cout << "Ingrese la carrera del estudiante: ";
    cin.ignore();
    getline(cin, carrera);

    Estudiante e1(nombre, edad, carrera);

    cout << "\nDatos del estudiante ingresado\n";
    e1.muestraDatos();

    return 0;
};