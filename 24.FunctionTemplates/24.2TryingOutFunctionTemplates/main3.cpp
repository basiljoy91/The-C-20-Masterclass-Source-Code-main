#include <iostream>
#include <string>

using namespace std;

template <typename Q>
Q kuppan(Q a, Q b);

int main(){

    int a{10};
    int b{20};

    double c{1.1};
    double d{1.2};

    string e{"basil"};
    string f{"bensil"};

    cout << "result_1: " << kuppan(a,b) << endl;
    cout << "result_2: " << kuppan(c,d) << endl;
    cout << "result_3: " << kuppan(e,f) << endl;

    return 0;
}

template<typename Q>
Q kuppan(Q a, Q b){
    return a+b;
}