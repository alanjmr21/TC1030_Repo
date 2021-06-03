/*
Alan Muñoz, Gardel Otero
TC 1030.700
02/06/21
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <vector>
#include <string>
#include "ArrowWoman.h"
#include "LaserMan.h"
using namespace std;

//const int GOLPE = 10;
//const int ROUNDS = 3; 
/*
int getRand(int n){
    return (rand() % n) + 1;
}
*/

int main(){

    Personaje *p;
    p = new LaserMan;

    p->agregarTraje();
    p->agregarMonedas();
    p->MostrarInventario();
/* 
    vector <Personaje*> vecPersonaje;
    Personaje *p;

    p = new Traje();
    vecPersonaje.push_back(p);

    p = new Moneda();
    vecPersonaje.push_back(p);

    vecPersonaje[0]->agregarTraje();
    vecPersonaje[0]->agregarMonedas();
    vecPersonaje[0]->MostrarInventario();

  
    srand(time(0));

    LaserMan c1;
    arrowWoman c2;

    Personaje* p1 = &c1;
    Personaje* p2 = &c2;
    
    c1.showCargalaser();
    c2.showCargaArrow();

    for(int i = 0; i < ROUNDS; i++){
        p1->shoot(getRand(GOLPE));
        p2->shoot(getRand(GOLPE));
        cout << " ... "<< endl;
        usleep(3000000);
    }

   
    for (int i = 0; i < ROUNDS; i++){
        cl1.shoot(getRand(GOLPE));
        ca1.shoot(getRand(GOLPE));
        cout << " ... "<< endl;
        usleep(3000000);
    }

    c1.showCargalaser();
    c2.showCargaArrow();

    if (c1.getCargalaser() > c2.getCargaArrow()){
        cout << "Gano Laser Man!!!" << endl;
    
    }
    else {
        cout << "Gano Arrow Woman!!!" << endl;
    }
    return 0;
*/
}