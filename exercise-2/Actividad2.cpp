#include <iostream>

using namespace std;

int main(){

    int num1, num2, residuo;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    residuo = num1 % num2;

    if (residuo == 0){
        cout << num1 << " es un multiplo de " << num2 << endl;
    } else {
        cout << num1 << " no es un multiplo de " << num2 << endl;
    }

    cout << "El residuo es: " << residuo << endl;

    return 0;

}