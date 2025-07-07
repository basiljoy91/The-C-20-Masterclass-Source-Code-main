#include <iostream>
#include <string>

using namespace std;

template <typename T> T minimum(T a, T b){
    return ((a>b)? b: a);
};

template <> const char* minimum<const char* > (const char* a, const char* b){
    return((a<b)? a: b);
};

int main(){

    int a{10};
    int b{20};
    double c{1.1};
    double d{2.2};
    string e{"chugano monu"};
    string f{"entha moluse jadayano"};

    const char* g{"basil"};
    const char* h{"bensil"};

    cout << "min_int: " << minimum(a, b) << endl;
    cout << "min_double: " << minimum(c, d) << endl;
    cout << "min_string: " << minimum(e, f) << endl;
    cout << "min_char: " << minimum(g, h) << endl;

    return 0;
}