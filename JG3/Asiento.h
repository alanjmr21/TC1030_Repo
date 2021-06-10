#include "Item.h"

class Asiento : public Item {
    public:
        void usarItem();
        void getDesc(); 
        string descripcion();
};
void Asiento::usarItem(){
    cout << "Se incorporo el asiento a la maquina!" << endl;
}
void Asiento::getDesc(){
    cout << "+Asiento de la Maquina del Tiempo" << endl;
    
}
string Asiento::descripcion(){
    return "+Asiento de la Maquina del Tiempo";
}