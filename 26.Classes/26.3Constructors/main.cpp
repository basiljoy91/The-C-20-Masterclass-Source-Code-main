#include<iostream>

using namespace std;

double PI = {3.14};

class Cylinder{
    private:

        //member variables
        double radius = {2};
        double height = {5};
    
    public:
        //constructor
        Cylinder(){
            radius = 1;
            height = 2;
        }

        //member function or methords
        double volume(){
            return PI * radius * radius * height;
        }  
};

int main(){
    
    Cylinder cylinder1; //object
    cout << "result: " << cylinder1.volume() << endl;
    
    return 0;
}