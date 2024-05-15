#include <iostream>
using namespace std;
int main()
{

    int edad;
    cout << "Usted es mayor de edad? \n";
    cout << "Ingrese su edad wapo: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "Usted ya esta viejo ";
    } 
    else  {
            cout << "usted esta bicho aun. \n";
        }
        
    cout << "Gracias por usar el simulador" ;

    return 0;
}