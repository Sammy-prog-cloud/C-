#include <iostream>

using namespace std;

int main(){
    int sales = 11000;
    double commission = (sales > 10000) ? .1 : .05;
    cout << commission;
    return 0;
}
 