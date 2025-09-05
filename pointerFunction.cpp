#include <iostream>

using namespace std;

void increasePrice(double *price){
    *price *= 1.2;
}

int main(){
    double price = 78;
    increasePrice(&price);
    cout << price;
    return 0;
}