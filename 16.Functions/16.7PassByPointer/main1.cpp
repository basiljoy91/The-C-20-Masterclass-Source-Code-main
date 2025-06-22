#include <iostream>

using namespace std;

void sayage(int *age);

int main(){
    int age {22};

    cout << "before functoin: " << age << endl;

    sayage(&age);

    cout << "after function: " << age << endl;

return 0;
}

void sayage(int *age){
   int b = ++ *age;
   cout << "age: " << *age << endl;
}