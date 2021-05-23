//Gardel Otero Verdugo 
//A01251908
//TC 1030.700
//20/05/21
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "herencialaserman.h"
#include "herenciaarrowWoman.h"
using namespace std;

const int GOLPE = 10;
const int ROUNDS = 3; 

int getRand(int n){
    return (rand() % n) + 1;
}

/*void Combate(LaserMan cl1,arrowWoman ca1){
    int hits = getRand(ROUNDS);
    for (int i = 0; i < hits; i++){
        cl1.shootLaser(getRand(GOLPE));
        ca1.shootArrow(getRand(GOLPE));
    }
    
}*/

int main(){
    srand(time(0));
    
    LaserMan cl1;
    arrowWoman ca1;
    
    cl1.showCargalaser();
    ca1.showCargaArrow();
    
    for (int i = 0; i < ROUNDS; i++){
        cl1.shootLaser(getRand(GOLPE));
        ca1.shootArrow(getRand(GOLPE));
        cout << " ... "<< endl;
        Sleep(3000);
    }

    cl1.showCargalaser();
    ca1.showCargaArrow();

    if (cl1.getCargalaser() > ca1.getCargaArrow()){
        cout << "Gano Laser Man!!!" << endl;
    
    }
    else {
        cout << "Gano Arrow Woman!!!" << endl;
    }
    return 0;
}