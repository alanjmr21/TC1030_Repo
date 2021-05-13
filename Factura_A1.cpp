 
#include <iostream>
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
 
void GeneraFactura(int contFactura, Factura arreglof[], Vendedor v1, Inventario i2, int Cant){
 
    Factura f1;
    f1.Cve_vendedor = v1.Cve_vendedor;
    f1.Cve_Articulo = i2.Cve_Articulo;
    f1.Cantidad = Cant;
    f1.NoFactura = "F" + GETDATE();
    arreglof[contFactura] = f1;
     
 
};
 
int main(){
 
};
