#include "Fraccion.h"
#include <iostream>

using namespace std;

int main() {
    
    int opcion = 0;

    do {
        Fraccion f1;
        Fraccion f2;
        Fraccion f3;
        int num, den;
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Sumar fracciones" << endl;
        cout << "2. Restar fracciones" << endl;
        cout << "3. Multiplicar fracciones" << endl;
        cout << "4. Dividir fracciones" << endl;
        cout << "5. Salir" << endl;

        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese el numerador de la fraccion 1: ";
            cin >> num;
            f1.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 1: ";
            cin >> den;
            f1.setDenominador(den);

            
            cout << "Ingrese el numerador de la fraccion 2: ";
            cin >> num;
            f2.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 2: ";
            cin >> den;
            f2.setDenominador(den);

            f3 = f1.suma(f2);
            f3.simplificar();
            f3.imprimir();
            f3.~Fraccion();
            break;

        case 2:
            cout << "Ingrese el numerador de la fraccion 1: ";
            cin >> num;
            f1.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 1: ";
            cin >> den;
            f1.setDenominador(den);

            cout << "Ingrese el numerador de la fraccion 2: ";
            cin >> num;
            f2.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 2: ";
            cin >> den;
            f2.setDenominador(den);

            f3 = f1.resta(f2);
            f3.simplificar();
            f3.imprimir();
            f3.~Fraccion();
            break;

        case 3:
            cout << "Ingrese el numerador de la fraccion 1: ";
            cin >> num;
            f1.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 1: ";
            cin >> den;
            f1.setDenominador(den);


            cout << "Ingrese el numerador de la fraccion 2: ";
            cin >> num;
            f2.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 2: ";
            cin >> den;
            f2.setDenominador(den);

            f3 = f1.multiplicacion(f2);
            f3.simplificar();
            f3.imprimir();
            f3.~Fraccion();
            break;

        case 4:
            cout << "Ingrese el numerador de la fraccion 1: ";
            cin >> num;
            f1.setNumerador(num);
            cout << "Ingrese el denominador de lala fraccion 1: ";
            cin >> den;
            f1.setDenominador(den);


            cout << "Ingrese el numerador de la fraccion 2: ";
            cin >> num;
            f2.setNumerador(num);
            cout << "Ingrese el denominador de la fraccion 2: ";
            cin >> den;
            f2.setDenominador(den);

            f3 = f1.division(f2);
            f3.simplificar();
            f3.imprimir();
            f3.~Fraccion();
            break;

        case 5:
            break;

        default:
            cout << "Opcion invalida." << endl;
            break;
        }

        cout << endl;

    } while (opcion != 5);

    return 0;

}




