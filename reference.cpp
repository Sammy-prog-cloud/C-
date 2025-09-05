#include <iostream>

using namespace std;

void increasePrice(double& price){
    price = price * 3.2;
}

/* The & operator was used to create a reference variable, 
    but it can also be used to get the memory address of a variable   
    The memory address is in hexadecimal form (0x.. )                   */

int main(){
    double price = 100;
    increasePrice(price);
    cout << price;
}