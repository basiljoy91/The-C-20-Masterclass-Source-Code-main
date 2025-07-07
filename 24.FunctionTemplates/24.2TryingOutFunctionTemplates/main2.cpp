#include <iostream>
#include <string>

using namespace std;

template <typename V>
V minimum(V a, V b){
    return (a<b)? a : b;
}

int main(){
    
    int a{10};
    int b{20};

    double c{1.1};
    double d{1.2};

    string e{"basil"};
    string f{"bensil"};

    cout << "result_1: " << minimum(a,b) << endl;
    cout << "result_2: " << minimum(c,d) << endl;
    cout << "result_3: " << minimum(e,f) << endl;
    
    return 0;
}