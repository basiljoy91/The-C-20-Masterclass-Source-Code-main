#include <iostream>

using namespace std;

double increment_multiply(double a, double b){
    
    cout << "inside function, before increment: " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    double result = ((++a) * (++b));

    cout << "inside function, after increment: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
}