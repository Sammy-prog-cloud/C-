#include <iostream>

using namespace std;

class Cars{
    public:
        string model;
        string color;
        int year;
};

int main(){
    Cars car1, car2;
    car1.model = "Toyota";
    car1.color = "White";
    car1.year = 2022;

    car2.model = "Honda";
    car2.color = "Wine";
    car2.year = 2019;

    cout << car1.model << ", " << car1.color << ", " <<  car1.year << endl;
    cout << car2.model << ", " << car2.color << ", " <<  car2.year << endl;
}
