#include <iostream>

using namespace std;

void ciclomulti(int n);

int main()
{
    int numero = 1;
    int tabla;
    while (numero <=9)
    {
        cout << "Tabla del " << numero << endl;
        numero++;
        
    }
    do {
    cout << "Seleccione una tabla de multiplicacion: ";
    cin >> tabla;
    if (tabla < 1 || tabla > 9){
        cout << "La tabla no se encuentra en la lista" << endl;
    }
    }
    while (tabla <1 || tabla >9);
    
    ciclomulti(tabla); 
    system("pause");
    return EXIT_SUCCESS;
}

void ciclomulti(int n)
{
    int mult;
    int i;
    for( i = 1; i <= 9; i++){
        mult = n * i;
        cout << n << " * " << i << " = " << mult << endl;
    }
}
/* Autor: Nelson Andres Delgado Machado */