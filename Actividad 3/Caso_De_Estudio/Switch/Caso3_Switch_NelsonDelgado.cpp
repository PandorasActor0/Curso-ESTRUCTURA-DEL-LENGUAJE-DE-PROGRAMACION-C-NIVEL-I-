#include <iostream>

using namespace std;

int main() {
    // Definicion de variables
    char descripcion[30];
    char disponible, Tipo;
    char referencia[30];
    float PorcenUtilidad;
    double costo, precio, costoTotal, PrecioTotal, utilidadUnidad, UtilidadTotal;
    int talla, Cantidad;

    // se solicitan los datos
    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl << endl;
    cout << "Digite la referencia del zapato..." << endl;
    cin >> referencia;
    cin.ignore();
    cout << "Digite una descripcion del zapato..." << endl;
    cin.getline(descripcion, 30);
    cout << "Digite la talla.." << endl;
    cin >> talla;
    cout << "Digite la tecla si esta o no disponible para la venta S/N..." << endl;
    cin >> disponible;
    cout << "Digite la cantidad de zapatos..." << endl;
    cin >> Cantidad;
    cout << "Digita el costo Unitario del zapato..." << endl;
    cin >> costo;

    system("cls");
    // Se realizan los calculos pertinentes

    switch (costo > 60000 ? 'C' : (costo > 30000 ? 'B' : 'A')) {
        case 'B':
            Tipo = 'B';
            PorcenUtilidad = 40;
            break;
        case 'C':
            Tipo = 'C';
            PorcenUtilidad = 30;
            break;
        default:
            Tipo = 'A'; // Manejo de caso por defecto
            PorcenUtilidad = 50;
            break;
    }

    precio = costo + ((costo * PorcenUtilidad) / 100);
    utilidadUnidad = precio - costo;
    costoTotal = costo * Cantidad;
    PrecioTotal = precio * Cantidad;
    UtilidadTotal = utilidadUnidad * Cantidad;

    // Se muestra la salida

    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES..." << endl << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "TIPO: " << Tipo << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponible << endl;
    cout << "CANTIDAD DE ZAPATOS: " << Cantidad << endl;
    cout << "COSTO UNIDAD: " << costo << endl;
    cout << "COSTO TOTAL: " << costoTotal << endl;
    cout << "PRECIO UNIDAD: " << precio << endl;
    cout << "PRECIO TOTAL DE: " << Cantidad <<" Unidades "<< PrecioTotal << endl;
    cout << "UTILIDAD POR UNIDAD: " << utilidadUnidad << endl;
    cout << "UTILIDAD TOTAL: " << UtilidadTotal << endl;
    cout << "PORCENTAJE DE UTILIDAD: " << PorcenUtilidad << endl << endl;
    cout << "Gracias por digitar la informacion" << endl;

    system("pause");
    return EXIT_SUCCESS;
}
/* Autor: Nelson Andres Delgado Machado */