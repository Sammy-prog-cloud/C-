#include <iostream>

using namespace std;

void greet(string name){
    cout <<  "Hello " << name << endl;
}

string fullName(string firstName, string lastName){
    return firstName + " " + lastName;
}

int main(){
    string name = fullName("Mosh", "Hamedani");
    greet(name);
    cout << "Done";
}