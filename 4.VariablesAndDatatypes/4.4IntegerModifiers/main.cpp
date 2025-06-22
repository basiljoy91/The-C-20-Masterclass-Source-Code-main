#include<iostream>

int main(){

    signed int value1{19}; /*this modifier states that it
                            the value can be both +ve and -ve*/
    signed int value2{-2003}; // applied int modifiers  

    std::cout << "value 1 = " << value1 << std::endl;
    std::cout << "value 2 = " << value2 << std::endl;

    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sixeof(value2) : " << sizeof(value2) << std::endl; 

    unsigned int value3{20}; // this modifier says that it can be only +ve
    unsigned int value4{2004}; // -ve value if enterd can cause error

    std::cout << "value 3 = " << value3 << std::endl;
    std::cout << "value 4 = " << value4 << std::endl;

    std::cout << "sizeof(value3) : " << sizeof(value3) << std::endl;
    std::cout << "sizeof(value4) : " << sizeof(value4) << std::endl;

return 0;
}