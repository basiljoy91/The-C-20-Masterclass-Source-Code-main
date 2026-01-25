#include<iostream>

using namespace std;

double PI = {3.14};

class Cylinder{
    private:
        //member variable
        double radius {2};
        double height {3};
    
    public:
        //constructor with parameter
        Cylinder(double par_radius, double par_height){
            radius = par_radius;
            height = par_height;
        }

        //member function
        double volume(){
            return PI * height * radius * radius;
        }
    };

    int main(){
        Cylinder Cylinder1(3, 4); // object
        Cylinder Cylinder2(10,5); // object

        cout << "cylinder_1: " << Cylinder1.volume() << endl;
        cout << "cylinder_2: " << Cylinder2.volume() << endl;
    }