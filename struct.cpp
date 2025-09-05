#include <iostream>

using namespace std;


struct{
    int myNum;
    string myString;
} myStructure;

struct Car{
    string brand;
    string model;
    int year;
}myCar1,  myCar2;

int main(){
    myStructure.myNum = 1;
    myStructure.myString = "Hello World";
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;
    
    // The next line of codes is another exam of where the struct key word can be used 

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;
    cout << myCar1.brand << endl;
    cout << myCar1.year << endl;
    cout << myCar1.model << endl;
}