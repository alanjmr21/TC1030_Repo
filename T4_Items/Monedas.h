#include "Item.h"

using namespace std;

class Moneda : public Item {
    public:
        Moneda();
        Moneda(string, string, int);
        string getColor();
        int getValor();
        void usarItem();
    private:
        int valor;   
};

Moneda::Moneda() : Item(){
    valor = 0;
};

Moneda::Moneda(string n, string d, int v) : Item(){
    valor = v;
};

int Moneda::getValor() {
    return valor;
};

void Moneda::usarItem() {
    cout << "Se agrego una moneda" << endl;
}
