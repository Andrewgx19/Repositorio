#include <iostream>
using namespace std;

// El usuario debe e ingresar un numero entero y luego determinar si es positivo,negativo,cero//

int main()
{
    int numero;

    cout << "digite un numero" << endl;
    cin >> numero;

    if (numero > 0)

    {
        cout << " tu numero ingresado es positivo " <<endl;
    }

    else if (numero < 0)
    {

         cout << "tu numero ingresado es negativo" << endl;
    }

    else
    {
        cout << "su numero es cero" <<endl;
    }

    return 0;
}
