#include<iostream>
using namespace std;

int minmax(int a, int b){
    if (a>b)
        return a;
    else if (b>a)
        return b;    
};

int main(){
    int a, b;
    cout << "enter a value for a: ";
    cin >> a;
    cout << "enter a value for b: ";
    cin >> b;
    cout << "Maximum amoung the value is: " << minmax(a,b);

    return 0;
}