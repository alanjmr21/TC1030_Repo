#include "Item.h"

class TablaPeriodica : public Item {
    public:
        void usarItem();
        void getDesc();
};
void TablaPeriodica::usarItem(){
    cout << "Se utilizo la Tabla Periodica" << endl;
}
void TablaPeriodica::getDesc(){
    cout << "+Tabla Periodica con Signos de Elementos" << endl;
}