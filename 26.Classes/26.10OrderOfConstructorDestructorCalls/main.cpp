#include <iostream>
#include <string_view>

using namespace std;

class Dog{
    private:
        string_view name;
        string_view breed;
        int* age {nullptr};

    public:
        Dog() = default;
        Dog(string_view param_name, string_view param_breed, int param_age){
            name = param_name;
            breed = param_breed;
            age = new int;
            *age = param_age;

            cout << "construted: " << name << endl;
        }
        ~Dog(){
            delete age;
            
            cout << "destructed: " << name << endl;
        }
};

