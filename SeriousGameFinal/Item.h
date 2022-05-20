#ifndef Item_h
#define Item_h

class Item {
    public:
        virtual void getDesc();
        virtual void usarItem();
        virtual string descripcion();
    protected:
        string nombre;
        string desc;
};

void Item::getDesc(){
    cout << "Estoy sin descripcion" << endl;
}

void Item::usarItem(){
    cout << "No estas usando nada" << endl;
}

string Item::descripcion(){
    return "No hay descripcion";
}

#endif