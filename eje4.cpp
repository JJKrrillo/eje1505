#include <iostream>
using namespace std;
int main () {

    double  N1 , N2 , N3 , N4, N5, N6 , promedio ;
    string nombre ;

    cout << "Ingrese el nombre del estudiante: " ;
    cin >> nombre ;

    cout << "Calcule su promedio de nota: " ;
    cout << "ingrese la nota del corto 1: " ;
    cin >> N1 ;
    cout << "ingrese la nota del corto 2: " ;
    cin >> N2 ;
    cout << "ingrese la nota del parcial 1: " ;
    cin >> N3 ;
    cout << "ingrese la nota del Parcial 2: " ;
    cin >> N4 ;
    cout << "ingrese la nota del laboratorio: " ;
    cin >> N5 ;
    cout << "ingrese la nota del proyecto :" ;
    cin >> N6 ;

    promedio = (N1 * 0.1) + (N2 * 0.1) + (N3 * 0.15) + (N4 * 0.20) + (N5 * 0.20) + (N6 * 0.25) ;
    cout << "El promedio de su nota es: " << promedio << endl ;
    

    if (promedio >= 6 ){
    cout << "El estudiante paso la materia ";
    }
    else {
    cout << "El estudiante dejo la materia \n";
    }
    cout << "Gracias por usar el programa :D";
    return 0;
}