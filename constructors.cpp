#include <iostream>

using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

    Car(){
        brand = "Unknown";
        model = "Unknown";
    }
    Car(string b, string m){
        brand = b;
        model = m;
    }
};

int main(){
    Car myCar1;
    Car myCar2("Ford", "Mustang");
    Car myCar3("BMW", "X5");

    cout << "Car 1: " << myCar1.model << ", " << myCar1.brand << endl;
    cout << "Car 2: " << myCar2.model << ", " << myCar2.brand << endl;
    cout << "Car 3: " << myCar3.model << ", " << myCar3.brand << endl;
}
