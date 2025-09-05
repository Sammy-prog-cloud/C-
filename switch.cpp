#include <iostream>

using namespace std;

int main(){
    cout << "1- Create an account" << endl
         << "2- Change password" << endl
         << "3- Quit" << endl
         << "Select an option : ";
    
    int input;
    cin << input;

    switch(input) {
        case 1:
            cout << "You selected 1";
            break;
        case 2:
            cout << "You selected 2";
            break;
        default:
            cout << "Goodbye";

    }
}