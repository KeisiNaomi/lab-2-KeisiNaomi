#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;
    int suma, promedio, producto, mayor, menor;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3;

    suma = num1 + num2 + num3;
    promedio = suma / 3;
    producto = num1 * num2 * num3;

    if (num1 > num2 && num1 > num3){
        mayor = num1;
    } else if (num2 > num3 && num2 > num1){
        mayor = num2;
    } else {
        mayor = num3;
    }

    if (num1 < num2 && num1 < num3){
        menor = num1;
    } else if (num2 < num3 && num2 < num1){
        menor = num2;
    } else {
        menor = num3;
    }
    cout << "La suma es de: " << suma << endl;
    cout << "El promedio es de: " << promedio << endl;
    cout << "El producto es de: " << producto << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;

}