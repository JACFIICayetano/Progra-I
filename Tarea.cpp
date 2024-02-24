#include <iostream>
using namespace std;
int main () {
    cout <<"\n";

    int ingresado;
    cout << "Digite un numero entre 1-7 te gustaria  ejecutar" << endl;
    cout <<"\n";
    cout << "1 Determinar si es mayor de edad" << endl;
    cout << "2 DETERMINAR CUAL DE LOS DOS NUMEROS INGRESADOS ES MAYOR" << endl;
    cout << "3 DETERMINAR SI EL NUMERO ES PAR O IMPAR" << endl;
    cout << "4 CALCULAR FACTORIAL DE UN NUMERO" << endl;
    cout << "5 Numeros Primos al limite del numero ingresado del usuario FOR" << endl;
    cout << "6 Numeros primos al limite del numero ingresado del usuario con SECUENCIA WHILE" << endl;
    cout << "7 ESTRUCTURA DE CONTROL DE SELECCION SWITCH" << endl;
    cin >> ingresado;
    cout <<"\n";

    switch (ingresado) {

        //1.DETERMINAR SI ES MAYOR DE EDAD O NO

        case 1: cout<< "Determinar si es mayor de edad" << endl;
            int edad;
            cout << "Ingrese su edad" << endl;
            cin >> edad;

            if (edad >= 18) {
                cout << "Eres Mayor de edad" << endl;

            } else {
                cout << "Eres menor de edad" << endl;
            } break;

            //2.DETERMINAR CUAL DE LOS DOS NUMEROS INGRESADOS ES MAYOR

            int num1, num2;
        case 2: cout<< "DETERMINAR CUAL DE LOS DOS NUMEROS INGRESADOS ES MAYOR" << endl;
            cout << "Ingresa el primer numero" << endl;
            cin >> num1;

            cout << "ingresa el segundo numero" << endl;
            cin >> num2;

            if (num1 > num2) {
                cout << "El primer numero es mayor" << endl;

            } else if (num2 > num1) {
                cout << " El segundo numero  es mayor" << endl;
            } else {
                cout << " Los numero ingresados son numeros 0" << endl;
            }
            break;

            //3.DETERMINAR SI EL NUMERO ES PAR O IMPAR

            int Num;
        case 3: cout<< "DETERMINAR SI EL NUMERO ES PAR O IMPAR" << endl;
            cout << "Ingresa un numero entero para determinar si es PAR O IMPAR" << endl;
            cin >> Num;

            if (Num % 2 == 0) {
                cout << "Es un NUMERO PAR" << endl;

            } else if (Num % 2 == 1) {
                cout << "Es un numero IMPAR" << endl;
            } else {
                cout << "No es un numero entero, vuelve a intentarlo" << endl;
            } break;

            //4.CALCULAR FACTORIAL DE UN NUMERO

        case 4: cout << "Calcular el Factorial de un numero" << endl;
            int Numero, k;
            float facto;
            facto = 1;
            k = 1;

            cout << "Ingresa un numero para calcular su factorial" << endl;
            cin >> Numero;

            while (k <= Numero) {
                facto = facto * k;
                k++;

            }
            cout << "El Factorial de " << Numero << " es: " << facto << endl;

            break;

            //5. Numeros Primos al limite del numero ingresado del usuario FOR

            int numerito;
        case 5: cout <<"Numeros Primos al limite del numero ingresado del usuario FOR" << endl;
            numerito;
            cout << "Ingrese un numero que sea mayor a 10 y menor que 30" << endl;
            cin >> numerito;

            for (int i = 1; i <= 30; ++i) {
                if ((i % 2 == 1) && (i <= numerito))
                    cout << i << endl;
            }
            break;

            //6. Numeros primos al limite del numero ingresado del usuario con SECUENCIA WHILE
            // CONSULTARLO CON EL INGENIERO JP

            int Numerito;
        case  6: cout << "Numeros primos al limite del numero ingresado del usuario con SECUENCIA WHILE";
            int i = 1;

            cout << "Ingresa un numero que sea mayor a 10 y menor que 30" << endl;
            cin >> Numerito;
            while (i < Numerito){
                if (i % 2 == 1)
                cout << i << endl;
            } 
            i++;
            break;
    }

    //7.ESTRUCTURA DE CONTROL DE SELECCION SWITCH
    switch (ingresado) {

        case 7: cout << "ESTRUCTURA DE CONTROL DE SELECCION SWITCH" << endl;
            int usuario;
            cout << "Ingrese un numero del 1-5, para saber que Dia es" << endl;
            cin >> usuario;

            switch (usuario) {
                case 1:
                    cout << "Lunes";
                    break;
                case 2:
                    cout << " Martes";
                    break;
                case 3:
                    cout << " Miercoles ";
                    break;
                case 4:
                    cout << " Jueves ";
                    break;
                case 5:
                    cout << " Viernes ";
                    break;
                default:
                    cout << "No esta el rango del 1 al 5";

            }
            break;
    }







}
