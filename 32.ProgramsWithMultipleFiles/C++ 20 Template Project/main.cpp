#include<iostream>
using namespace std;

void age1(int age){
    if (age >18){
        cout << "you are " << age << " years old. you can proceed." << endl;
    }
    else if ( age <= 18)
        cout << "you are not eliglible for this" << endl;
};

int main(){
    cout << "enter your age: ";
    int age;
    cin >> age;
    age1(age);


}