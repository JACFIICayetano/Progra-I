#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;

     int num1, num2, num3;
     cout << "Ingresa el primer numero" << endl;
     cin>> num1;
     cout << "Ingresa el segundo numero" << endl;
     cin >> num2;
     cout << "Ingresa el tercer numero" << endl;
     cin >> num3;

     if (num1>num2 && num1>num3){
         cout << "El primer numero es mayor de los tres" << endl;

     } else if (num2>num1 && num2>num3){
         cout << "El segundo numero es mayor de los tres" << endl;
     } else if (num3>num1 && num3>num2){
         cout << "El tercer numero es mayor de los tres" << endl;
     }
     else{
         cout << "Los tres numeros son iguales" << endl;
     }
}