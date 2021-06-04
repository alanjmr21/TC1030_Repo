#include "Item.h"

class Motor : public Item {
    public:
        void usarItem();
        void getDesc(); 
};
void Motor::usarItem(){
    cout << "Se incorporo el motor a la maquina!" << endl;
}
void Motor::getDesc(){
    cout << "+Motor de la Maquina del Tiempo" << endl;
}