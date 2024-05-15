#include <iostream>
using namespace std;
int main () {

    double angulo ;

    cout << "que tipo de angulo es ? \n";
    cout << "Ingrese el valor del angulo: " ;
    cin >> angulo ;

    if (angulo > 90 ) {
        cout << "Su angulo es obtuso \n";
    }
    else if (angulo < 90 ) { 
        cout << "Su angulo es agudo \n";
    }
    else {
        cout << "Es un angulo recto \n";
    }

        cout << "Gracias por usar el simulador";
    return 0;
}