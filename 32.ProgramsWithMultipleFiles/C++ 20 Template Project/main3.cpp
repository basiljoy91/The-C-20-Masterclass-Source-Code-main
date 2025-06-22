#include <iostream>

using namespace std;

void enter_menu(size_t a){
    if (a >= 18)
        cout << "you are eligibel" << endl;
    else if (a < 18)
        cout << "you are not eligible" << endl;
    
}

int main(){
    for(size_t i{1}; i<20; i++){
        enter_menu(i);
    }

    return 0;
}