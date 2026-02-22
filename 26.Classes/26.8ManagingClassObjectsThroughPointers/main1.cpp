#include <iostream>
#include "class.h"

using namespace std;

int main(){
    
    Cylinder cylinder1;
    Cylinder cylinder2(2,3);
    Cylinder* p_cylinder = new Cylinder(100,10);

    Cylinder* p_cylinder1 = &cylinder1;

    cout << "Volume default: " << cylinder1.volume() << endl;
    cout << "volume 2,3: " << cylinder2.volume() << "  " << "radius: " << cylinder2.get_prim_radius() << endl;
    cout << "volume pointer 100,10: " << p_cylinder->volume() << "  " << "radius: " << p_cylinder->get_prim_radius();
    p_cylinder->set_prim_radius(3);
    cout << "   " << "show changed radius: " << p_cylinder->get_prim_radius() << "  " << "volume after raduis changed: " << p_cylinder->volume() << endl;
    cout << "refered by pointer volume : " << p_cylinder1->volume() << "  " << "Show radius: " << p_cylinder->get_prim_radius() << endl;
    p_cylinder1->set_prim_height(5);
    cout << "Show changed height: " << p_cylinder1->get_prim_height() << endl;
    cout << "Show changed height: " << cylinder2.get_prim_height() << endl;

    
    delete p_cylinder;
    
    return 0;
}