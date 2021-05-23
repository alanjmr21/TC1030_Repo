#include "herenciapersonaje.h"
class LaserMan : public Personaje {
public:
    LaserMan();
    LaserMan(int, int);
    void shootLaser(int);
    void addLaser();
    void showCargalaser();
    int getCargalaser();
    

private:
    int numCargaslaser;

};

LaserMan::LaserMan(): Personaje(){
    numCargaslaser = 100;
}
LaserMan::LaserMan(int l, int ncl): Personaje(l){
    numCargaslaser= ncl;

}

void LaserMan::shootLaser(int numl){
    numCargaslaser = numCargaslaser - numl;
    cout << "Se disparo el arma laser, por lo tanto quedan: "<< numCargaslaser << "cargas" << endl;
}

void LaserMan::showCargalaser() {
    cout << "Numero de cargas del Laser: " << numCargaslaser << endl;
}

int LaserMan::getCargalaser(){
    return numCargaslaser;
}