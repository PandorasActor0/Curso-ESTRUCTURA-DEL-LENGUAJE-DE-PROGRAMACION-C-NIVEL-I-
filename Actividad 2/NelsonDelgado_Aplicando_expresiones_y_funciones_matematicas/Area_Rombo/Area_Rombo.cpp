#include <iostream>

using namespace std;

int main()
{
    /* code */
    float dmayor, dmenor, a;
    cout << "PROGRAMA AREA DEL ROMBO" << endl << endl;
    cout << "Digite la diagonal mayor" << endl;
    cin >> dmayor;
    cout << "Digite la diagonal menos" << endl;
    cin >> dmenor;

    system("cls");
    a = (dmayor * dmenor) / 2;

    cout << "El area del rombo es " << a << endl;
    system("pause");

    return EXIT_SUCCESS;
}

/* Nelson Andres Delgado Machado */