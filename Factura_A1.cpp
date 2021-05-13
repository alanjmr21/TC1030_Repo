#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <functional>
#include <algorithm>
#include <cstdlib>
#include<string.h>
#include <stdexcept>
#include <ctime>
 

using namespace std;
 
class Vendedor {
    public:
        string Cve_vendedor;
        string Nombre;
};
 
class Inventario {
    public:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
};
class Factura {
    public:
        string NoFactura;
        string Cve_vendedor;
        string Cve_Articulo;
        int Cantidad;
        int Precio;
};
 
std::string GETDATE() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%Y%m%d%H%S",timeinfo);
    std::string str(buffer);

    std::cout << str;

    return str;    
}

void GeneraFactura(vector <Factura> &Facturas, Vendedor v, Inventario i, int Cant, int precio) {

    Factura f1;
    f1.Cve_vendedor = v.Cve_vendedor;
    f1.Cve_Articulo = i.Cve_Articulo;
    f1.Cantidad = Cant;
    f1.NoFactura = "F"+ GETDATE();
    f1.Precio = precio;

    Facturas.push_back(f1);

};

void agregarVendedores(vector <Vendedor> &Vendedores){

    int num_vendedores;
    string nombre;
    string claveVendedor;

    cout << "¿Cuantos vendedores desea añadir?: ";
    cin >> num_vendedores;

    for(int i=0; i < num_vendedores; i++) {
        
        cout << "Ingrese el nombre del trabajdor: ";
        cin.ignore();
        getline(cin, nombre);

        cout << "Ingrese la clave del trabajdor: ";
        cin >> claveVendedor;

        Vendedor v = {claveVendedor,nombre};

        Vendedores.push_back(v);
    }
};

void agregarArticulos(vector <Inventario> &Articulos){
 
   string Cve_Articulo;
   string Descripcion;
   double Precio;
   int num_articulos;
 
   cout << "¿Cuantos articulos desea añadir?: ";
   cin >> num_articulos;
 
   for(int i=0; i < num_articulos; i++) {
      
       cout << "Ingrese el nombre del articulo: ";
       cin.ignore();
       getline(cin, Descripcion);
 
       cout << "Ingrese la clave del articulo: ";
       cin >> Cve_Articulo;
 
       cout << "Ingrese el precio del articulo: ";
       cin >> Precio;
 
       Inventario a = {Cve_Articulo,Descripcion,Precio};
 
       Articulos.push_back(a);
   }
}
 
int main(){
     
    string resp1;
    int opcion = 0;
    int num_vendedor;
    int num_articulo;
    int cant;
    int precio_final;
    
    vector <Vendedor> vecVendedores;
    vector <Inventario> vecArticulos;
    vector <Factura> vecFacturas;

    while (opcion != 4) {

        cout << "Oprime 1 para añadir vendedores\nOprime 2 para añadir articulos\nOprime 3 para generar una factura\n";
        cin >> opcion;

        if(opcion == 1){
            agregarVendedores(vecVendedores);

            for(int i=0; i < vecVendedores.size(); i++){
                cout << i << "\t" << vecVendedores[i].Cve_vendedor << "\t";
                cout << vecVendedores[i].Nombre << endl;
            }
        } else if (opcion == 2){
            agregarArticulos(vecArticulos);

            for(int i=0; i < vecArticulos.size(); i++){
                cout << i << "\t" << vecArticulos[i].Cve_Articulo << "\t";
                cout << vecArticulos[i].Descripcion << "\t";
                cout << vecArticulos[i].Precio << endl;
            }
        } else if (opcion == 3){
            if (vecVendedores.size() == 0 or vecArticulos.size()==0){
                cout << "No hay articulos o vendedores registrados, presione una de las opciones anteriores para añadirlos\n";
            } else {
                cout << "Ingrese el NUMERO de vendedor: \n";
                for(int i=0; i < vecVendedores.size(); i++){
                    cout << i << "\t" << vecVendedores[i].Cve_vendedor << "\t";
                    cout << vecVendedores[i].Nombre << endl;
                }
                cin >> num_vendedor;

                cout << "Ingrese el NUMERO del articulo: \n";
                for(int i=0; i < vecArticulos.size(); i++){
                    cout << i << "\t" << vecArticulos[i].Cve_Articulo << "\t";
                    cout << vecArticulos[i].Descripcion << "\t";
                    cout << vecArticulos[i].Precio << endl;
                }
                cin >> num_articulo;

                cout << "Ingrese la cantidad del articulo vendido: ";
                cin >> cant;

                precio_final = (vecArticulos[num_articulo].Precio)*cant;

                GeneraFactura(vecFacturas, vecVendedores[num_vendedor], vecArticulos[num_articulo], cant, precio_final);

                cout << "\nDetalles de la factura\n";

                cout << "No Factura\t\tCve Vendedor\tCve Articulo\tCantidad\tPrecio" << endl;

                for (int i=0; i<vecFacturas.size(); i++) {
                    cout << vecFacturas[i].NoFactura << "\t\t";
                    cout << vecFacturas[i].Cve_vendedor << "\t\t";
                    cout << vecFacturas[i].Cve_Articulo << "\t\t";
                    cout << vecFacturas[i].Cantidad << "\t\t";
                    cout << vecFacturas[i].Precio << endl;

                }
                
            }

        } else if (opcion == 4) {
            break;
        } else {
            cout << "Numero no valido, ingrese otra opcion\n";
        }

    }

}
