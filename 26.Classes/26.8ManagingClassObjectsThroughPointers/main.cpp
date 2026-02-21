#include <iostream>
#include "class.h"

using namespace std;

int main(){

    Cylinder cylinder1; // default parameter
    Cylinder cylinder2(3,4); // input parameter 3 and 4
    Cylinder* cylinder3 = new Cylinder(2,3); // pointer intilization -> sotred in heap

    cout << "Default Voulme: " << cylinder1.volume() << endl;
    cout << "Cylinder 2 Volume: " << cylinder2.volume() << endl;
    cout << "Pointer Cylinder: " << cylinder3->volume() << endl;
    cout << "pointer Cylinder: " << (*cylinder3).volume() << endl;

    return 0;
}
