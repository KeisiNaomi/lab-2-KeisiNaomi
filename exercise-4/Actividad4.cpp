#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: "  << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3;

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)){
        cout << num1 << " es el numero del medio" << endl;
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)){
        cout << num2 << " es el numero del medio" << endl;
    } else {
        cout << num3 << " es el numero del medio" << endl;
    }

    return 0;

}