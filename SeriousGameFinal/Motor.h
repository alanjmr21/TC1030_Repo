#include "Item.h"

class Motor : public Item {
    public:
        void usarItem();
        void getDesc(); 
        string descripcion();
};
void Motor::usarItem(){
    cout << "Se incorporo el motor a la maquina!" << endl;
}
void Motor::getDesc(){
    cout << "+Motor de la Maquina del Tiempo" << endl;
    
}
string Motor::descripcion(){
    return "+Motor de la Maquina del Tiempo";
}