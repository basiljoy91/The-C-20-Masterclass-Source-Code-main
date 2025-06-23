#include <iostream>

using namespace std;

void max_double(const double a, const double b, double &max){
    if (a > b)
        max = a;
    else
        max = b;
}

int main (){
    double input1 {10.01};
    double input2 {30.99};
    double maximum;

    max_double(input1, input2, maximum);

    cout << "maximum: " << maximum << endl;


}