#include <iostream>

using namespace std;

int main(){
    while(true){
        cout << "Number : ";
        int number;
        cin >> number;
        if (number >= 1 && number <= 5)
            break;
        cout << "Error! Enter a number between 1 - 5. ";
    return 0;
    }
}