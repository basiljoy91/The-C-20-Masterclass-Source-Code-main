#include<iostream>

using namespace std;

const double PI = {3.14};
class Cylinder{
    public: 
        double volume(){
            return PI * radius * radius * height;
        }

        double radius = {1};
        double height = {1};
};

int main(){

    Cylinder Cylinder1;
    cout << "volume: " << Cylinder1.volume() << endl;
    cout << "raduis: " << Cylinder1.radius << endl;
    cout << "height: " << Cylinder1.height << endl;

    return 0;

}