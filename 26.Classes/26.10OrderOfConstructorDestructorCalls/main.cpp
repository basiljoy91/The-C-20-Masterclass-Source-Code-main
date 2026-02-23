#include <iostream>
#include <string_view>

using namespace std;

class Dog{
    private:
        string_view name;
        string_view breed;
        int* age {nullptr};

    public:
       