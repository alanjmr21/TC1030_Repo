/* 
Alan Muñoz
A01252054
Programacion Orientada a Objetos
*/

#include <iostream>
#include <string>

using namespace std;
 
class Vendedor {
    public:
        Vendedor();
        Vendedor(string clave, string nombre);
        void Set_Vendedor(string clave, string nombre);
        string Get_Vend() {return Cve_Vendedor;}
        string Get_Nombre() {return Nombre;};
    private:
        string Cve_Vendedor;
        string Nombre;
};

Vendedor::Vendedor() {
    Cve_Vendedor = "vacante";
    Nombre = "nadie";
};

Vendedor::Vendedor(string clave, string nom) {
    Cve_Vendedor = clave;
    Nombre = nom;
}

class Inventario {
    public:
        Inventario();
        Inventario(string cve, string desc, double precio);
        string Get_Cve_Art() {return Cve_Articulo;};
        string Get_Desc() {return Descripcion;};
        double Get_Precio() {return Precio;};
    private:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
};

Inventario::Inventario() {
    Cve_Articulo = "ninguno";
    Descripcion = "nohay";
    Precio = 0.0;
};

Inventario::Inventario(string cve, string desc, double precio) {
    Cve_Articulo = cve;
    Descripcion = desc;
    Precio = precio;
}

int main() {
    Vendedor v1;
    Vendedor v2("duhfw87","Alan Jose Muñoz Ramirez");

    cout << v1.Get_Vend()<<" "<<v1.Get_Nombre() << endl;
    cout<< v2.Get_Vend()<<" "<<v2.Get_Nombre() << endl;

    Inventario a1;
    Inventario a2("2834rb","Refrigerador",7043.80);

    cout << a1.Get_Cve_Art() << " " << a1.Get_Desc() << " " << a1.Get_Precio() << endl;
    cout << a2.Get_Cve_Art() << " " << a2.Get_Desc() << " " << a2.Get_Precio() << endl;

    return 0;
    
}