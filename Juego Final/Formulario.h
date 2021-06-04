#include "Item.h"

class Formulario : public Item {
    public:
        void usarItem();
        void getDesc();
};
void Formulario::usarItem(){
    cout << "Se utilizo el Formulario" << endl;
}
void Formulario::getDesc(){
    cout << "+Formulario de Fisica" << endl;
}