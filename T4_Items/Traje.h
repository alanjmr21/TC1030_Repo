#include "Item.h"

using namespace std;

class Traje : public Item {
    public:
        Traje();
        Traje(string, string, string, int);
        string getColor();
        int getTalla();
        void usarItem();
    private:
        string color;
        int talla;   
};

Traje::Traje() : Item(){
    color = "Ninguno";
    talla = 0;
};

Traje::Traje(string n, string d, string c, int t) : Item(n,d){
    color = c;
    talla = t;
};

string Traje::getColor() {
    return color;
};

int Traje::getTalla() {
    return talla;
};

void Traje::usarItem() {
    cout << "Se agrego un traje especial" << endl;
}
