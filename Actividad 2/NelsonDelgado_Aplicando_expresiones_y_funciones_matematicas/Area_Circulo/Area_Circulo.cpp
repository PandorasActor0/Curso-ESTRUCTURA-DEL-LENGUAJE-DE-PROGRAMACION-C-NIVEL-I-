#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float R, A;
    float Pi = 3.14159;
    cout << "PROGRAMA PARA EL AREA DE UN CIRCULO" << endl << endl;
    cout << "Digite el radio del circulo" << endl;
    cin >> R;
    A = Pi * pow(R,2);

    system("cls");

    cout << "El area del circulo es " << A << endl;
    system("pause");

    return EXIT_SUCCESS;
}

/* Nelson Andres Delgado Machado */