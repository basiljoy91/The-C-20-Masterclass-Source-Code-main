//capture all by value
#include <iostream>

using namespace std;

int main(){
    
    int c {19};

    auto fun_1 = [=](){
        cout << "inner_value: " << c << endl;
    };

    for(int i=0; i<=6; i++){
        cout << "outer_value: " << c << endl;
        fun_1();
        c++;
    }

    return 0;
}