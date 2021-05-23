#include "Operacion.h"

class Resta: public Operacion {
    public:
        void operar();
};

void Resta::operar(){
    resultado=valor1-valor2;
}