#include <iostream>

using namespace std;

int max(int a, int b);

int main(){
    
    int h {10};
    int j {20};

    int result = max(h,j);

    cout << "maximum amoung the listed numbers are: " << result << endl;

    return 0;
}

int max(int a, int b){
    if (a > b)
        return a;
    else if (b > a)
        return b;
    return a;
}
