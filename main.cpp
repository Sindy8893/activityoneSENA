#include <iostream>
using namespace std;

int main()
{
    int referencia_zapatos;
    char descripcion_zapatos[30];
    int talla;
    char disponible;
    int costo;
    int precio;
   

    cout<<"ADMINISTRADOR VENTA DE ZAPATOS"<<endl;
    cout<<"Digite la referencia del zapato..."<<endl;
    cin>>referencia_zapatos;
    cin.ignore(256, '\n');
    cout<<"Digite una descripcion del zapato..."<<endl;
    cin.getline(descripcion_zapatos,30);
    cout<<"Digite la talla del zapato..."<<endl;
    cin>>talla;
    cout<<"Digite si esta disponible a la venta S/N..."<<endl;
    cin>>disponible;
    cout<<"Digite el costo del zapato..."<<endl;
    cin>>costo;
    cout<<"Digite el precio de venta del zapato..."<<endl;
    cin>>precio;

    system("cls");
    
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES"<<endl;
    cout<<"REFERENCIA:"<<referencia_zapatos<<endl;
    cout<<"DESCRIPCION:"<<descripcion_zapatos<<endl;
    cout<<"TALLA:"<<talla<<endl;
    cout<<"COSTO:"<<costo<<endl;
    cout<<"PRECIO:"<<precio<<endl;
    cout<<"SINDY DAYANA CORTES TOSCANO"<<endl<<endl;

    system("pause");
    return EXIT_SUCCESS;
}