#include <iostream>
    int addnumbers(int first_param, int second_param){

         int result = first_param + second_param;        
         return result;
          }

        int main(){

                 int first_number {1}; // this says first number is 1
                 int second_number {20};

                 int sum1 = first_number + second_number;

            std::cout << "first number:" << first_number << std::endl;
            std::cout << "second number:" << second_number << std::endl;

         
            std::cout << "sum:" << sum1 << std::endl;

                int sum2 = sum1 + second_number;
                std::cout << "total:" << sum2 << std::endl;

            sum1 = addnumbers(12,3);
            std::cout << "2nd sum:" << sum1 << std::endl;

            std::cout << "3rd sum:" << addnumbers(15,16) << std::endl;
            
              return 0;

}