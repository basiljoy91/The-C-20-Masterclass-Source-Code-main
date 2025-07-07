//template function
#include <iostream>
#include <string>

using namespace std;

template <typename T> 
T maximum (T a, T b){
    return (a > b )? a : b;
}

int main(){

    cout << "int out: " << maximum(10,20) << endl;
    cout << "double out: " << maximum(17.1, 17.2) << endl;
    cout << "string out: " << maximum ("basil", "bensil") << endl;

    return 0;    
}