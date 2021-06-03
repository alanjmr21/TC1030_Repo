#ifndef Personaje_h
#define Personaje_h

#include "Traje.h"
#include "Monedas.h"

using namespace std;

class Personaje {
    public:
        Personaje();
        Personaje(int);
        void run();
        void jump();
        void agregarTraje();
        void agregarMonedas();
        void MostrarInventario();
        virtual void shoot(int);  // VITUAL FUNCTION SHOOT

    protected:
        int level;
        int num_balas;
        vector <Item*> vecObjetos;
};

Personaje::Personaje() {
    level = 0;
}

Personaje::Personaje(int l) {
    level = l;
}
void Personaje::run(){
    cout << "El prota esta corrienndo" << endl;
}
void Personaje::jump(){
    cout << "El prota esta brincando" << endl;
}

void Personaje::shoot(int num){
    cout << "Dsiparo" << endl;

}

void Personaje::agregarTraje() {
    Item *obj; 
    obj = new Traje();
    vecObjetos.push_back(obj);
}

void Personaje::agregarMonedas() {
    Item *obj; 
    obj = new Moneda();
    vecObjetos.push_back(obj);
}

void Personaje::MostrarInventario() {
    cout <<"ESTE ES EL INVENTARIO"<< endl;
    for (int i=0; i < vecObjetos.size();i++) {
        vecObjetos[i]->usarItem();
    }
}
#endif