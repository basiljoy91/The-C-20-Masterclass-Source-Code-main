// call all by referance
#include <iostream>

using namespace std;

int main(){

    int c{19};

    auto fun_1 = [&](){
        cout << "innter_value: " << c << endl;
    };

    for(int i=0; i<=6; i++){
        cout << "outer_value: " << c << endl;
        fun_1();
        c++;
    }

    return 0;
}