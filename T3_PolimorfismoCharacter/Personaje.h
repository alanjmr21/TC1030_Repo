#ifndef Personaje_h
#define Personaje_h

using namespace std;

class Personaje {
    public:
        Personaje();
        Personaje(int);
        void run();
        void jump();
        virtual void shoot(int);  // VITUAL FUNCTION SHOOT

    protected:
        int level;
        int num_balas;
};
Personaje::Personaje() {
    level = 0;
};

Personaje::Personaje(int l) {
    level = l;
};
void Personaje::run(){
    cout << "El prota esta corrienndo" << endl;
};
void Personaje::jump(){
    cout << "El prota esta brincando" << endl;
};

void Personaje::shoot(int num){
    cout << "Dsiparo" << endl;

};
#endif