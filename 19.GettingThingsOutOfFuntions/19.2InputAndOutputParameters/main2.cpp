#include <iostream>

using namespace std;

void max(const int &a, const int &b, int max){
    if (a > b)
        max = a;
    else 
        max = b;
}

int main(){

    int maximum;
    int input1 {10};
    int input2 {20};

    max(input1, input2, maximum);

    cout << "maximum: " << maximum << endl;
}