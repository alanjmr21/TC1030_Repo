#include "Item.h"

class Computadora : public Item {
    public:
        void usarItem();
        void getDesc(); 
};
void Computadora::usarItem(){
    cout << "Se incorporo la computadora a la maquina!" << endl;
}
void Computadora::getDesc(){
    cout << "+Computadora de la Maquina del Tiempo" << endl;
}