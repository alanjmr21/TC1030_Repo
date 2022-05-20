#include "Item.h"

class Transformador : public Item {
    public:
        void usarItem();
        void getDesc(); 
        string descripcion();
};
void Transformador::usarItem(){
    cout << "Se incorporo el transformador a la maquina!" << endl;
}
void Transformador::getDesc(){
    cout << "+Transformador de la Maquina del Tiempo" << endl;
} 

string Transformador::descripcion(){
    return "+Transformador de la Maquina del Tiempo";
}