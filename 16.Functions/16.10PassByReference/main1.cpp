#include <iostream>
 
using namespace std;

void sayname( int& age);

int main(){
    int age {21};
    cout << "age before passing: " << age << endl;
    sayname(age);
    cout << "age after passinfg: " << age << endl;

    return 0;
}

void sayname( int& age){
    ++age;
    cout << " age on function: " << age << endl;
}