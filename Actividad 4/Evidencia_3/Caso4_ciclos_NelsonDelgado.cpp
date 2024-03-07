#include <iostream>

using namespace std;

int main()
{
    char continuar;
    char referencia[30];
    char descripcion[30];
    int talla;
    double costo;
    int i = 1;

    cout << "Desea registrar un zapato s/n: ";
    cin >> continuar;

    while (continuar == 's' || continuar == 'S')
    {
        cout << "Digite la referencia: ";
        cin >> referencia;
        cin.ignore();
        cout << "Digite una descripcion: ";
        cin.getline(descripcion, 30);
        cout << "Digite la talla: ";
        cin >> talla;
        cout << "Costo: ";
        cin >> costo;
        cout << endl;
        cout << "Desea Registrar Otro Zapato s/n: ";
        cin >> continuar;
        
    }

    cout << "Fin de la aplicacion" << endl;
    system("pause");
    return EXIT_SUCCESS;
}

/* Nelson Andres Delgado Machado */
