#include "Item.h"

class Formulario : public Item {
    public:
        void usarItem();
        void getDesc();
        string descripcion();
};
void Formulario::usarItem(){
    cout << "Se utilizo el Formulario" << endl;
}
void Formulario::getDesc(){
    cout << "+Formulario de Fisica" << endl;
}
string Formulario::descripcion(){
    return "+Formulario de Fisica";
}