#include <iostream>

using namespace std;

template <typename T> T maximum(T a, T b);

int main(){

    int a{10};
    int b{20};

    auto result_1 = maximum<int>(a, b);
    auto result_2 = maximum<double>(a,b);

    cout << "specified: " << result_1 << endl;
    cout << "sizeoff: " << sizeof(result_1) << endl;

    cout << "specified: " << result_2 << endl;
    cout << "sizeoff: " << sizeof(result_2) << endl;
    return 0;
}

template <typename T> T maximum(T a, T b){
    return a+b;
}