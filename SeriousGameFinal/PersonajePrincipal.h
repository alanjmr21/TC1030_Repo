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

class PersonajePrincipal {
    public:
        PersonajePrincipal();
        PersonajePrincipal(string n);

        // ACCIONES
        void verItems();
        void verPiezasMaquina();
        void entrarLab();
        void salirLab();
        void irMaquina();
        void activarMaquina();
        string contestarString();
        int contestarInt();
        double contestarDouble();

        string getDescItem(int);
        int getVecSize();
        int getVecSizeMaquina();

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
        void agregarPiezaMaquina(Item *parteMaq);
        void agregarObjetoLab(Item *item);
        
    private:
        string respuestaS;
        int respuestaI;
        double respuestaD;
        string nombre;
        vector <Item*> vecItems;
        vector <Item*> vecPiezasMaquina;
        Item *piezaMaquina;
};
PersonajePrincipal::PersonajePrincipal(){
    nombre = "Jugador";
}
PersonajePrincipal::PersonajePrincipal(string n){
    nombre = n;
}

void PersonajePrincipal::entrarLab(){
    cout << nombre << " ,has entrado a un laboratorio...\n" << endl;
    usleep(2000000);
}

void PersonajePrincipal::salirLab(){
    cout << "Has salido del laboratorio" << endl;
}

void PersonajePrincipal::irMaquina(){
    cout << "Estas en la Maquina" << endl;
}

void PersonajePrincipal::agregarPiezaMaquina(Item *piezaMaquina){

    vecPiezasMaquina.push_back(piezaMaquina);
    cout << nombre << ",te has ganado la pieza de este laboratorio -> ";
    piezaMaquina->getDesc();
    cout << endl;
    
    // Item *motor;
    // motor = new Motor();
    // vecItems.push_back(motor);
    
    // cout << vecItems.size() << endl;
}

void PersonajePrincipal::agregarObjetoLab(Item *item){
    vecItems.push_back(item);
    cout << "Se añadio el siguiente objeto a tu inventario -> ";
    item->getDesc();

}

void PersonajePrincipal::activarMaquina(){
    if (vecPiezasMaquina.size()==0){
        cout << "No puedes activar la maquina, tu inventaro de piezas esta vacio" << endl;
    } else if (vecPiezasMaquina.size() != 0) { 
        if (vecPiezasMaquina.size() == 4) {
            cout << "Felicidades viajero, lograste construir la maquina, ahoora vuleve y salva al mundo!" << endl;
        } else {
            cout << "Aun no has recolectado todas las piezas, buscalas en los laboratorios" << endl;
        }
    }
}
//&& (find(vecItems.begin(), vecItems.end(), new Transformador()) != vecItems.end()) && (find(vecItems.begin(), vecItems.end(), new Computadora()) != vecItems.end()) && (find(vecItems.begin(), vecItems.end(), new Asiento()) != vecItems.end())
void PersonajePrincipal::verItems(){
    cout << "Estos son tus items" << endl;
    if(vecItems.size()==0){
        cout << "No hay items aun" << endl;
    } else {
        for (int i=0; i < vecItems.size(); i++){
            vecItems[i]->getDesc();
        }
    }

}

string PersonajePrincipal::contestarString(){
    cin >> respuestaS;
    return respuestaS;
}

int PersonajePrincipal::contestarInt(){
    cin >> respuestaI;
    return respuestaI;

}

double PersonajePrincipal::contestarDouble(){
    cin >> respuestaD;
    return respuestaD;
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
void PersonajePrincipal::verPiezasMaquina(){
    cout << "Estos son tus items" << endl;
    if(vecPiezasMaquina.size()==0){
        cout << "No hay items aun" << endl;
    } else {
        for (int i=0; i < vecPiezasMaquina.size(); i++){
            vecPiezasMaquina[i]->getDesc();
        }
    }
}

string PersonajePrincipal::getDescItem(int i){
    return vecItems[i]->descripcion();
}
int PersonajePrincipal::getVecSize(){
    return vecItems.size();
}
int PersonajePrincipal::getVecSizeMaquina(){
    return vecPiezasMaquina.size();
}