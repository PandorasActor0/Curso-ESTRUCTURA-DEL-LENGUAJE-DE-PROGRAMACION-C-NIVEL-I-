#include <iostream>

using namespace std;

int main()
{
    char descripcion[30];
    char disponible;
    long costo, precio,referencia, talla;

    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout << "Digite la referencia del zapato..." << endl;
    cin >> referencia;
    // 
    cin.ignore();
    cout << "Digite una descripcion del zapato..." << endl;
    cin.getline(descripcion, 30);
    cout << "Digite la talla.." << endl;
    cin >> talla;
    cout << "Digite la tecla si esta o no disponible para la venta S/N..." << endl;
    cin >> disponible;
    cout << "Digita el costo del zapato..." << endl;
    cin >> costo;
    cout << "Digita el precio de venta del zapato..." << endl;
    cin >> precio;

    system("cls");
    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES..." << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponible << endl;
    cout << "COSTO: " << costo << endl;
    cout << "PRECIO: " << precio << endl;
    cout << "Gracias por digitar la informacion" << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}
