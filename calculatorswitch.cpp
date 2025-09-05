#include <iostream>

using namespace std;

int main(){
    cout << "Enter in two numbers : ";
    int first;
    int second;
    cin >> first >> second;
    cout << "1- Addition "<< endl
         << "2- Subtraction " << endl
         << "3- Multiplication " << endl
         << "4- Division " << endl
         << "select the operator : ";

    short input;
    cin >> input;
    cout << "The answer is :  ";
    
    switch(input){
        case 1: 
            cout << first + second;
            break;
        case 2:
            cout << first - second;
            break;
        case 3:
            cout << first * second;
            break;
        case 4:
            cout << first / second << endl;
        default:
            cout << "You entered an incorrect operator.";
    }
    return 0;
}
