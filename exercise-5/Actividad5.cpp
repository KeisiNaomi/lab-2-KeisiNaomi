#include <iostream>

using namespace std;

int main(){

    float fx;

    cout << "**********" << endl;
    cout << "x   f(x)" << endl;
    cout << "**********" << endl;

    for (int x = 0; x <= 5; x++){
        fx = (x * x * x) - (x * x) + 5;

        cout << x << "   " << fx << endl;
    }

    cout << "**********" << endl;

    return 0;

}