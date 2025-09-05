#include <iostream>

using namespace std;

int main(){
     int sale = 11000;
    double commission;
    if (sale <= 10000) commission = .1;
    else if (sale <= 15000) commission = .15;
    else commission = .2;
    cout << commission;
    return 0;
}
