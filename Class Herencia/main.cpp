#include <iostream>

using namespace std;
class Hospedaje{
private:
    string nombre;
    string correo;
    int numero;
public:
    Hospedaje(string, string, int);
    void mostrarusario();
};
class Hotel: public Hospedaje{
private:
    int reservartiempo;
    int costo;
    int costofinal;
public:
    Hotel(string, string, int, int, int, int);
    void mostrarcosto();
};
Hospedaje::Hospedaje (string _nombre, string _correo, int _numero){
nombre=_nombre;
correo=_correo;
numero=_numero;
}

void Hospedaje::mostrarusario(){
cout << "\n\tRecibo" << endl;
cout << "------------------------------" << endl;
cout << "Usario: " << nombre << endl;
cout << "Correo: " << correo << endl;
cout << "Numero de telefono: " << numero << endl;
}

Hotel::Hotel(string _nombre, string _correo, int _numero, int _reservartiempo, int _costo, int _costofinal):Hospedaje(_nombre, _correo, _numero){
reservartiempo=_reservartiempo;
costo=_costo;
costofinal=_costofinal;
}

void Hotel::mostrarcosto(){
    mostrarusario();
cout << "\nSu costo es de: " << costofinal << endl;
}
int main(){
    string A;
    string B;
    int C;
    int D;
    int E;
    int F;
    int R;
    int opcion;
    int repetir;
    string h;

    cout << "Bienvenido al programa de Hospedaje: "<<endl;
    cout << "\nIngrese nombre del usario: ";
    cin >> A;
    cout << "\nIngrese su correo: ";
    cin >> B;
    cout << "\nIngrese su numero de telefono: ";
    cin >> C;
    Hospedaje Usario1(A,B,C);
    cout << "\nDonde desea reservar? \n 1. Hotel \n 2. Apartamento \n 3. AirBnb"<<endl;
    cin >> opcion;
    switch (opcion){
    case 1:
    cout<<"\nInsertar cantidad de noche de hospedaje en hotel: ";
    cin >> D ;
    E=500;
    F=E*D;
    h="noche";
    repetir=1;
    break;

    case 2:
    cout<<"\nInsertar cantidad de dias de hospedaje en Apartamento: ";
    cin >> D ;
    E=700;
    F=E*D;
    h="dia";
    repetir=1;
    break;

    case 3:
    cout<<"\nInsertar cantidad de dias de hospedaje en Airband: ";
    cin >> D ;
    E=1000;
    F=E*D;
    h="dia";
    repetir=1;
    break;
    default:
        cout << "Error. Ingrese solo el numero.";
    }
    Hotel HHotel(A,B,C,D,E,F);
    HHotel.mostrarcosto();
    cout << "\nDetalle de precio: Precio por " << h << " es de: " << E << endl;
    cout << "\nGracias por usar nuestro servicios, felices viajes.\n\n";
    return 0;
}
