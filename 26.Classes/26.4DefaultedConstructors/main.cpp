#include <iostream>

using namespace std;

double PI = {3.14};

class Cylinder{
    private:
        double radius {2};
        double height {1};
    
    public:
        Cylinder () = default;

        Cylinder( double para_radius, double para_height){
            radius = para_radius;
            height = para_height;
        }

        double volume(){
            return PI * radius * radius * height;
        }
};

int main(){
     
    Cylinder cylinder1;
    Cylinder cylinder2(3, 4);

    cout << "Volume1: " << cylinder1.volume() << endl;
    cout << "Volume2: " << cylinder2.volume() << endl;




}