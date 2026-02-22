#include <iostream>
#include <string_view>

using namespace std;

class Dog{
    private:
        string name;
        string breed;
        int* p_age{nullptr};


    public:
        Dog() = default;
        Dog(string parm_name, string param_breed, int param_age);
        ~Dog();
};

Dog::Dog(string parm_name, string param_breed, int param_age){
    name = parm_name;
    breed = param_breed;
    p_age = new int;
    *p_age = param_age;

    cout << "created " << name << endl;
}

Dog::~Dog(){
    delete p_age;

    cout << "deleted heap:";
}

int main(){
    Dog my_dog("thomman", "rotwheelr", 4);
}