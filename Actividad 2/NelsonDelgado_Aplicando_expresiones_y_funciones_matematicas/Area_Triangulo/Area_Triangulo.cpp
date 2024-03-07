#include <iostream>

using namespace std;

int main()
{
    /* code */
    float b, h, a;
    cout << "PROGRAMA PARA EL AREA DEL TRIANGULO" << endl << endl;
    cout << "Digite la base del triangulo" << endl;
    cin >> b;
    cout << "Digite la altura del triangulo" << endl;
    cin >> h;
    a = (b * h) / 2;
    system("cls");
    cout << "El area del triangulo es "<< a << endl;
    system("pause");
    return EXIT_SUCCESS;
}
/* Nelson Andres Delgado Machado */