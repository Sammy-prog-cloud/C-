#include <iostream>

using namespace std;

int main(){
    int number1;
    cout << "Enter in the first number : ";
    cin >> number1;

    int number2;
    cout << "Enter in the second number : ";
    cin >> number2;

    double largerNumber = (number1 > number2) ? number1 : number2;

    cout << largerNumber;
    return 0;
}
