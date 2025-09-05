#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    string street;
    cout << "Street : ";
    getline(cin, street);
    
    string city;
    cout << "City : ";
    getline(cin, city);

    string state;
    cout << "State : ";
    getline(cin, state);

    string zipCode;
    cout << "Zip Code : ";
    getline(cin, zipCode); 
    
    cout << street << endl
         << city << ", " << state << ", " << zipCode << endl;
   
         
int numbers[5] = {10, 20};
cout << numbers[1] << endl;

string firstName;
cout << "First Name : ";
getline(cin, firstName);

string middleName;
cout << "Middle Name : ";
getline(cin, middleName);

string lastName;
cout << "Last Name : ";
getline(cin, lastName);

string name[3] = {firstName, middleName, lastName};
cout << name[0] << endl;

string names[3];

cout << "Name : ";
getline(cin, names[0]);

cout << "Name : ";
getline(cin, names[1]);

cout << "Name : ";
getline(cin, names[2]);

cout << names[0];
}
