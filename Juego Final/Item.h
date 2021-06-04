#ifndef Item_h
#define Item_h

class Item {
    public:
        virtual void getDesc();
        virtual void usarItem();
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

#endif