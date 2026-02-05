/*
In C++, private member variables of a class cannot be accessed directly from main(). T
o read or modify these private variables, we define public member functions inside the class. 
These functions act as interfaces between the private data and the outside world.

Functions used to retrieve the value of private variables are called getters, 
and functions used to modify their values are called setters. Since these functions are public, 
they can be called from main(), allowing controlled access to the private data. 
This approach is known as the getter and setter mechanism.*/
 

#include<iostream>

using namespace std;

 double PI {3.14};

 class Cylinder{
    private:
        double priv_radius {10};
        
        double priv_height {10};
    public:
        Cylinder() = default;
        Cylinder(double radius, double height){
            priv_height = height;
            priv_radius = radius;
        }

        double volume(){
            return PI * priv_height * priv_radius * priv_radius;
        }

        //seterss 

        double get_pri_radius(){
            return priv_radius;
        }

        double get_pri_height(){
            return priv_height;
        }

        void set_pri_height(double set_height){
            priv_height = set_height;
        }

        void set_pri_radius(double set_raduis){
            priv_radius = set_raduis;
        }
 };

 int main(){
    Cylinder Cylinder1;
    Cylinder Cylinder2(1,2);

    cout << "priv_radius: " << Cylinder2.get_pri_radius() << endl;
    cout << "priv_height: " << Cylinder2.get_pri_height() << endl;

    Cylinder2.set_pri_height(5);
    Cylinder2.set_pri_radius(5);

    cout << "priv_radius: " << Cylinder2.get_pri_radius() << endl;
    cout << "priv_height: " << Cylinder2.get_pri_height() << endl;

    cout << "1priv_radius: " << Cylinder1.get_pri_radius() << endl;
    cout << "1priv_height: " << Cylinder1.get_pri_height() << endl;

    Cylinder1.set_pri_height(5);
    Cylinder1.set_pri_radius(5);

    cout << "1priv_radius: " << Cylinder1.get_pri_radius() << endl;
    cout << "1priv_height: " << Cylinder1.get_pri_height() << endl;

    return 0;
 }