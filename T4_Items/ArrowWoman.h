#include "Personaje.h"

class arrowWoman : public Personaje {
public:
    arrowWoman();
    arrowWoman(int, int);
    void shoot(int);
    void addArrow();
    void showCargaArrow();
    int getCargaArrow();
private:
    int numCargasArrow;
    

};

arrowWoman::arrowWoman(): Personaje(){
    numCargasArrow = 100;
}
arrowWoman::arrowWoman(int l, int nca): Personaje(l){
    numCargasArrow = nca;

}

void arrowWoman::shoot(int numa){
    numCargasArrow = numCargasArrow - numa;
    cout << "Se disparo el arco, por lo tanto quedan: "<< numCargasArrow << "cargas" << endl;
}
void arrowWoman::showCargaArrow() {
    cout << "Numero de cargas del arco: " << numCargasArrow << endl;
}

int arrowWoman::getCargaArrow(){
    return numCargasArrow;
}