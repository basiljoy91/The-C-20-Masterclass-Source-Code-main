//call by value
#include <iostream>
 
using namespace std;

int main(){
    
   int c = 10;
   
   auto fun_1 = [c](){
        cout << "inner_value: " << c << endl;
   };

    for (int i=0; i<=5; i++ ){
        cout << "Outer_value: " << c << endl;
        fun_1();
        c++;
    }

    return 0;
}