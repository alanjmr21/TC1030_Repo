#include "Item.h"

class Calculadora : public Item {
    public:
        void usarItem();
        void getDesc();
};
void Calculadora::usarItem(){
    cout << "Se utilizo la calculadora" << endl;
}
void Calculadora::getDesc(){
    cout << "+Calculadora Cientifica" << endl;
}