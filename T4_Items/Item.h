#ifndef Item_h
#define Item_h

using namespace std;

class Item {
    public:
        Item();
        Item(string, string);
        string getNombre();
        string getDesc();
        virtual void usarItem();
    protected:
        string nombre;
        string desc;
};

Item::Item() {
    nombre = "  Ninguno";
    desc = "Nada";
}

Item::Item(string n, string d) {
    nombre = n;
    desc = d;
}

string Item::getNombre() {
    return nombre;
}

void Item::usarItem() {
    cout << "Se esta agrego un item" << endl;
}

#endif
