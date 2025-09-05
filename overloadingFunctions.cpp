#include <iostream>

using namespace std;

void greet(string name){
    cout << "Hello " << name;
}
void greet( string title, string name){
    cout << "Hello " << title << " " << name;
}
int main(){
    greet("Mr", "Mosh");
}