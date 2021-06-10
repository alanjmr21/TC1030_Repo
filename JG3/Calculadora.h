#include "Item.h"

class Calculadora : public Item {
    public:
        void usarItem();
        void getDesc();
        string descripcion();
};
void Calculadora::usarItem(){
    cout << "Se utilizo la calculadora" << endl;
}
void Calculadora::getDesc(){
    cout << "+Calculadora Cientifica" << endl;
}
string Calculadora::descripcion(){
    return "+Calculadora Cientifica";
}