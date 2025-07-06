// call by referance
#include <iostream>

using namespace std;

int main(){

    int c = 10;
    
    auto fun_1 = [&c](){
        cout << "innner_value: " << c << endl;
    };

    for (int i=0; i<=5; i++){
        cout << "outer_value: " << c << endl;
        fun_1();
        c++;
    }

    return 0;
}

