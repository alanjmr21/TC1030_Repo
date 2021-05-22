#ifndef Operacion_h
#define Operacion_h

using namespace std;

class Operacion {
    public:
        void cargar1();
        int mostrarResultado();
        void cargar2();
    protected:
        int valor1;
        int valor2;
        int resultado;
};

void Operacion::cargar1(){
    cout<<"Ingrese primer valor: ";
    cin>>valor1;
}

void Operacion::cargar2() {
    cout<<"Ingrese segundo valor: ";
    cin>>valor2;
}

int Operacion::mostrarResultado(){
    cout <<resultado<<"\n";
    return resultado;
};

#endif