#include <iostream>

using namespace std;

int main(){
    cout << "Enter in two numbers : ";
    int number1;
    int number2;
    cin >> number1 >> number2;
    int result = (number1 > number2) ? number1 : number2;
    cout << result;
    //
    return 0;
}
