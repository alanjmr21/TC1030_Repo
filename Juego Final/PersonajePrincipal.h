#include "Item.h"

//OBJETOS PARA RESPONDER PREGUNTAS
#include "Calculadora.h"
#include "DiagramaBiologia.h"
#include "Formulario.h"
#include "TablaPeriodica.h"

//PARTES DE LA MAQUINA
#include "Computadora.h"
#include "Asiento.h"
#include "Transformador.h"
#include "Motor.h"

class PersonajePrincipal : public Item {
    public:
        // ACCIONES
        void verItems();
        void entrarLab();
        void salirLab();
        void irMaquina();
        void activarMaquina();

        // INVENTARIO - OBJETOS PARA RESPONDE PREGUNTAS
        void agregarCalculadora();
        void agregarFormulario();
        void agregarTablaP();
        void agregarDiagrama();

        //INVENTARIO - PARTES MAQUINA
        void agregarCompu();
        void agregarAsiento();
        void agregarTransformador();
        void agregarMotor();
        
    private:
        string nombre;
        vector <Item*> vecItems;
};

void PersonajePrincipal::entrarLab(){
    cout << "Has entrado a un laboratorio" << endl;
}

void PersonajePrincipal::salirLab(){
    cout << "Has salido del laboratorio" << endl;
}

void PersonajePrincipal::irMaquina(){
    cout << "Estas en la Maquina" << endl;
}

void PersonajePrincipal::activarMaquina(){
    for(int i=0; i < vecItems.size(); i++){
        //AQUI REVISA SI LAS PIEZAS DE LA MAQUINA ESTAN EN ITEMS
        //SI NO, LE DICE "Te faltan piezas viajero, no puedes activar la maquina"
    }
}

void PersonajePrincipal::verItems(){
    cout << "Estos son tus items" << endl;
    for (int i=0; i < vecItems.size(); i++) {
        vecItems[i]->getDesc();
    }
}

void PersonajePrincipal::agregarCalculadora(){
    Item *obj; 
    obj = new Calculadora();
    vecItems.push_back(obj);
    cout << "Se agrego la calculadora al inventario!" << endl;
}

void PersonajePrincipal::agregarFormulario(){
    Item *obj; 
    obj = new Formulario();
    vecItems.push_back(obj);
    cout << "Se agrego el formulario al inventario!" << endl;
}

void PersonajePrincipal::agregarDiagrama(){
    Item *obj; 
    obj = new DiagramaBiologia();
    vecItems.push_back(obj);
    cout << "Se agrego el diagrama de biologia al inventario!" << endl;
}

void PersonajePrincipal::agregarTablaP(){
    Item *obj; 
    obj = new TablaPeriodica();
    vecItems.push_back(obj);
    cout << "Se agrego la Tabla Periodica al inventario!" << endl;
}

