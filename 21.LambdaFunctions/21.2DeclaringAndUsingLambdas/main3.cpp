#include <iostream>

using namespace std;

int main(){
    auto fun1 = [](double a, double b){
        return a + b;
    };
    
    double result = fun1(10.7, 11.2);

    cout << result << endl;

    return 0;
}