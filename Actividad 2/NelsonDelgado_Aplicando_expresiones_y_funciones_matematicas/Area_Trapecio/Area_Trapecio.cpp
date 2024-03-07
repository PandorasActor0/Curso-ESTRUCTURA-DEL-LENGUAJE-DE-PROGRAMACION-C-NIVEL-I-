#include <iostream>

using namespace std;

int main()
{
    /* Teniendo en cuenta que la formula ((B*b)*h)/2 esta errada se corrige
    la formula corregida es ((B+b)*h)/2
     */
    float b1, b2, h, a;
    cout << "PROGRAMA PARA LA AREA DEL TRAPECIO" << endl << endl;
    cout << "Digite la base inferior " << endl;
    cin >> b1;
    cout << "Digite la base superior " << endl;
    cin >> b2;
    cout << "Digite la altura" << endl;
    cin >> h;
    system("cls");
    a = ((b1 + b2) * h)/2;
    cout << "El area del trapecio es de " << a << endl;
    system("pause");
    return EXIT_SUCCESS;
}
/* Nelson Andres Delgado Machado */