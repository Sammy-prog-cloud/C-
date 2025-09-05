#include <iostream>
using namespace std;

int main(){
    cout << "Enter in two numbers : ";
    int firstNumber;
    int secondNumber;
    cin >> firstNumber >> secondNumber;
    cout << "Which Operator would you like to use ? ";
    cout << "1 - Addition" << endl
         << "2 -  Subtraction" << endl
         << "3 - Multiplication" << endl
         << "4 - Division" << endl
         << "Select an option : ";
    short input;
    cin >> input;

    switch(input){
        case 1:
            int result1;
            result1 = firstNumber + secondNumber;
            cout <<  result1;
            break;
        case 2:
            int result2;
            result2 = firstNumber - secondNumber;
            cout << result2;
            break;
        case 3:
        int result3;
            result3 = firstNumber * secondNumber;
            cout << result3;
            break;
        case 4: 
            int result4;
            result4 = firstNumber / secondNumber;
            cout << result4;
            break;           
    }
    return 0;
}
