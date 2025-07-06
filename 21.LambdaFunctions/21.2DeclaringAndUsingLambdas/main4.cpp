#include <iostream>

using namespace std;

int main(){
    
    auto fun_1 = [](double a, double b)->int{
        return a + b;
    };

    auto fun_2 = [](double a, double b){
        return a + b;
    };

    auto result_1 = fun_1(2.23, 1.1);
    auto result_2 = fun_2(2.23, 1.1);

    cout << "result_1: " << result_1 << endl;
    cout << "result_2: " << result_2 << endl;

    cout << "sizeoff(result_1): " << sizeof(result_1) << endl;
    cout << "sizeoff(result_2): " << sizeof(result_2) << endl;
    return 0;
}