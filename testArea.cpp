#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    cout << "To find the area of a circle, Enter the value of radius : ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double areaOfCircle = pi * (pow(radius, 2));
    cout << areaOfCircle;

    srand(time(nullptr));
    const short minValue = 1;
    const short MaxValue = 6;
    short first = (rand() % (MaxValue - minValue + 1)) + minValue;
    short second = (rand() % (MaxValue - minValue + 1)) + minValue;
    cout << "(" << first << ", " << second << ")";

    // int numbers[] = {10, 20, 30};
    // int size = sizeof(numbers) / sizeof(int);
    // int* ptr = &numbers[size - 1];
    // cout << ptr[3] << endl;
    // // cout << *(ptr + 1) << endl;
    // // cout << numbers[1] << endl;
    // // cout << sizeof(numbers) << endl;
    // // cout << sizeof(int) << endl;
    // // cout << *ptr << endl; 


    // int* num = new int[10];
    // int* number = new int;
    // delete number;
    // delete[] num;
    // cout << num << endl;
    // cout << number << endl;
    // number = nullptr;
    // num = nullptr;



    // int x = 10;
    // int y = 20;
    // int* ptrX = &x;
    // int* ptrY = &y;
    // cout << *ptrX;

}