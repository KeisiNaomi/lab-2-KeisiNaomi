#include <iostream>

using namespace std;

int main(){

    int num, d1, d2, d3, d4, d5;

    cout << "Ingrese un numero de 5 digitos: " << endl;
    cin >> num;

        d1 = num / 10000;
        d2 = (num / 1000) % 10;
        d3 = (num / 100) % 10;
        d4 = (num / 10) % 10;
        d5 = num % 10;

        cout << "Digitos separados: " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;

    return 0;

}