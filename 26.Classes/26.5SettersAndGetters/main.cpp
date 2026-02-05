#include <iostream>

using namespace std;

const double PI = 3.14;
class Cylinder{
    private:
        double radius {2};
        double height {4};

    public:
        Cylinder() = default;
        Cylinder(double Base_radius, double Base_height){
            radius = Base_radius;
            height = Base_height;
        }

        double volume(){
            return PI * radius * radius * height;
        }

};

int main(){
    
    Cylinder Cylinder1;
    Cylinder Cylinder2(1,2);

    cout << "cylinder1 volume: " << Cylinder1.volume() << endl;
    cout << "cylinder2 volume: " << Cylinder2.volume() << endl;
    
    
    
    return 0;
}