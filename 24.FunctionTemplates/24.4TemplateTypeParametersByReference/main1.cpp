#include<iostream>
#include<string>

using namespace std;

template <typename T> T maximum(T a, T b){
    return (a>b)? a : b;
};

template<>
const char* maximum<const char*>(const char* a, const char* b){
    return(strcmp(a,b)>1)? a : b;
 };

 int main(){
    
    int a{10};
    int b{20};
    double c{1.1};
    double d{2.2};
    string e{"chugano mone"};
    string f{"entha moluse jadayano"};

    auto max_int = maximum(a, b);
    auto max_double = maximum(c, d);
    string max_char = maximum(e, f);

    const char* g{"basil"};
    const char* h{"bensil"};

    cout << "max_int: " << max_int << endl;
    cout << "max_double: " << max_double << endl;
    cout << "max_string: " << max_char << endl;
    cout << "max_char: " << maximum(g, h) << endl;

 }