#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3, combinacion;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3;

    combinacion = num1 * 100 + num2 * 10 + num3;

    cout << "El numero combinado es: " << combinacion << endl;

    return 0;

}