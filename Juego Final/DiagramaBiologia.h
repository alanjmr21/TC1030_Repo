#include "Item.h"

class DiagramaBiologia : public Item {
    public:
        void usarItem();
        void getDesc();
};
void DiagramaBiologia::usarItem(){
    cout << "Se utilizo el Diagrama" << endl;
}
void DiagramaBiologia::getDesc(){
    cout << "+Diagrama de Biologia - Celula" << endl;
}