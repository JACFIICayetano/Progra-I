#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;

    //TABLA de 4,
    /*int numero=4;

    cout << "Bienvenido a la Tabla del 4" << endl;

    for(int i=1; i<=10; i++){
        cout << numero << "x" <<i<< "=" << numero*i << endl;
    }*/
    //TABLA de 6,
    /*int numero=6;

    cout << "Bienvenido a la Tabla del 6" << endl;

    for(int i=1; i<=10; i++){
        cout << numero << "x" <<i<< "=" << numero*i << endl;
    }*/

    // Tabla del 10

    /*int numero=10;

    cout << "Bienvenido a la tabla del 10" << endl;

    for (int m = 1; m <=  10; ++m) {
        cout << numero << "X" << m << "=" << numero*m << endl;

    }*/

    //FACTORIAL

    /*int numero, factorial=1;

    cout << "Ingrese un numero para generarle el factorial" << endl;
    cin >> numero;

    for (int i =1; i <=numero; ++i) {
        factorial = factorial*i;

    }
    cout << "El numero factorial es:" << factorial << endl; */



    // FIBONACCI

    /* int num, a=0, b=1, c=1;

     cout<< "Ingresa el numero de elementos: " << endl;
     cin >> num;

     for (int i =1; i<num; ++i) {
         c= a + b;
         cout << c << " ";
         a = b;
         b = c;
     }
     cout << "\n";
     return 0;*/

    // NUMERO PRIMO

    /*int num;
    bool primo = true;

    cout << "Ingresa un numero" << endl;
    cin >> num;

    for (int e = 2; e < num; ++e) {
        if (num % 2 == 0) {
            primo = false;
        }
    }
    if (primo == true) {
        cout << "El numero es primo";
    }else {
        cout << "El numero no es primo " << endl;
    }*/

    //NUMERO PAR

    /*int nume;

    cout << "Ingrese un numero " << endl;
    cin >> nume;

     if (nume % 2 == 0){
         cout <<"El numero es par";
     }else{
         cout << "No es un numero par, Vuelve a Intentarlo" << endl;
     }
     return 0;*/

    //TABLA DE MULTIPLICAR CON EL NUMERO INGRESADO

    /*int numero;

    cout << "Ingresa un numero que desees de la tabla de multiplicar" <<  endl;
    cin >> numero;

     for (int i = 1; i <=10 ; ++i) {
         cout << numero<< " X " << i << " = " << numero*i << endl;
     }*/
}
