#include <iostream>
#include <string>

using namespace std;

void max_string(string &input1, string &input2, string &output ){
    if (input1 > input2)
        output = input1;
    else 
        output = input2;
}

int main(){

    string out_string;
    string string1 ("Sugunan");
    string string2 ("Dhamu");

    max_string(string1, string2, out_string);

    cout << "max_str: " << out_string << endl;
}