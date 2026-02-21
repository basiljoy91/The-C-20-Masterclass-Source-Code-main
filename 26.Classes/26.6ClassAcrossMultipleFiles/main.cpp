/*
In C programming, header files (.h) are used to create reusable libraries that store common items like constants, functions, or macros so they do not have to be written repeatedly in every file. For example, if we want to use a constant such as PI in many files, we can define it in a header file like constant.h and then include that file wherever it is needed. User-defined header files are included using double quotes (#include "constant.h"), while standard libraries use angle brackets (#include <stdio.h>). Each source file (.c) should include only the header files that it actually uses, because including unnecessary libraries everywhere is not good practice. If a header file is included more than once, it can cause compilation errors due to multiple definitions, so to prevent this problem we use header guards. Header guards are written using #ifndef, #define, and #endif, which ensure that the contents of the header file are included only once, even if the file is referenced multiple times in the program.

*/


#include <iostream>
#include "class.h"


using namespace std;


int main(){

    Cylinder Cylinder1;

    cout << "volume1: " << Cylinder1.volume() << endl;

    cout << "pri_height: " << Cylinder1.get_pri_height() << endl;
    cout << "pri_radius: " << Cylinder1.get_pri_radius() << endl;

    Cylinder1.set_pri_height(3);
    Cylinder1.set_pri_radius(4);

    cout << "pri_height: " << Cylinder1.get_pri_height() << endl;
    cout << "pri_radius: " << Cylinder1.get_pri_radius() << endl;

}