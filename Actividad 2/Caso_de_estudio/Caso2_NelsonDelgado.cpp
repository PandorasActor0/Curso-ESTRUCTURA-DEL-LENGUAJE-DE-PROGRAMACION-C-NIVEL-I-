#include <iostream>

using namespace std;

int main()
{
    // Definicion de variables
    char descripcion[30];
    char disponible;
    char referencia[30];
    float PorcenUtilidad;
    double costo, precio, costoTotal, PrecioTotal, utilidadUnidad, UtilidadTotal;
    int talla, Cantidad;

    // se solicitan los datos
    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl << endl;
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
    cout << "Digite la cantidad de zapatos..." << endl;
    cin >> Cantidad;
    cout << "Digita el costo Unitario del zapato..." << endl;
    cin >> costo;
    cout << "Digita el precio de venta Unitario del zapato..." << endl;
    cin >> precio;

    system("cls");
    // Se realizan los calculos pertinentes
    costoTotal = costo * Cantidad;
    PrecioTotal = precio * Cantidad;
    utilidadUnidad = precio - costo;
    UtilidadTotal = utilidadUnidad * Cantidad;
    PorcenUtilidad = (UtilidadTotal / PrecioTotal) * 100; // se toma en cuenta que el porcentaje de utilidad se mide con respecto al precio de venta

    // Se muestra la salida

    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES..." << endl << endl;
    cout << "REFERENCIA: " << referencia << endl;
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