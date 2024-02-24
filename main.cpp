#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;

   /* int num1, num2, num3;
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
        cout << "Los tres numeros son iguales" << endl;*/

  /* int numero1,numero2=0, suma;
    while (numero2>=0){
        cout << "Ingrese un numero" << endl;
        cin >> numero1;
        if (numero1<0){return 0;}
        cout << "Ingrese un otro numero" << endl;
        cin >> numero2;
        if (numero2<0) {return 0;}
        suma= numero1+numero2;
        cout << suma << endl;
        numero1= suma;
    }*/
  int numer1, y, suma;
  cout << "Ingresa numeros" << endl;
  cin >> numer1;

    for (y=2; y<numer1; y+=2) {
        suma =  suma+y;
        cout << suma << endl;
    }
    if (numer1 % 2== 0){
        suma = suma + numer1;
        cout<< suma << endl;
    }

    return 0;





}


