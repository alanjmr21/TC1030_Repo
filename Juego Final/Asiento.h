#include "Item.h"

class Asiento : public Item {
    public:
        void usarItem();
        void getDesc(); 
};
void Asiento::usarItem(){
    cout << "Se incorporo el asiento a la maquina!" << endl;
}
void Asiento::getDesc(){
    cout << "+Asiento de la Maquina del Tiempo" << endl;
}