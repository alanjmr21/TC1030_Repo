#ifndef herenciapersonaje_h
#define herenciapersonaje_h
using namespace std;
class Personaje {
    public:
        Personaje();
        Personaje(int);
        void run();
        void jump();

    protected:
        int level;
};
Personaje::Personaje() {
    level = 0;
};

Personaje::Personaje(int l) {
    level = l;
};
void Personaje::run(){
    cout << "El prota esta corrienndo" << endl;
}
void Personaje::jump(){
    cout << "El prota esta brincando" << endl;
}
#endif