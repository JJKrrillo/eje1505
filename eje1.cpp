#include <iostream>
using namespace std;
int main () {

    double alfa , beta , gamma , calculo ;
    cout << "Calcule el angulo restante de un triangulo";
    cout << "Ingrese el angulo 1: " ;
    cin >> alfa ;
    cout << "Ingrese el angulo 2: ";
    cin >> beta ;
    
    calculo = alfa + beta;


    if (calculo >= 180){
        cout << "el valor ingresado no es valido";
    }
    else {
        gamma = 180 - calculo ;
        cout << "el valor del tercer angulo es: " << gamma;
    }
        
    return 0;
}