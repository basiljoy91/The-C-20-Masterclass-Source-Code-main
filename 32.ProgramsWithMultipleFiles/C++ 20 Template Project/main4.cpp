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
    
    return result;
}

int main(){

    double h{3.00};
    double i{4.00};

    cout << "Outside function, before increment: " << endl;
    cout << "h: " << h << endl;
    cout << "i: " << i << endl;

    double incr_mult_result = increment_multiply(h,i);
}