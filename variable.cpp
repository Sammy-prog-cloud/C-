#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x = 10;
    int y = 5;
    double z = (x + 10) / (3*y);
    cout << z <<  endl;
    cout << "x = " << x << endl; 


    cout << "Enter in a value in Fahrenheit : ";
    double value;
    cin >> value;
    double valueInCelsius = ((value - 32) / (1.8));
    cout << valueInCelsius << endl;
    


    cout << "Radius Value to find Area of Circle : ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * (pow(radius, 2));
    cout << area << endl;
    

    int number = 0b11111111;
    int number2 = 0xff;
    cout << number << endl;
    cout << number2 << endl;
    
    short number1 = 100;
    int another={number1};
    cout << another;
    return 0;
}
