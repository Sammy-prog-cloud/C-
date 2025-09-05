#include <iostream>

using namespace std;

int myFunction(int x, int y){
    return x + y;
}

int main(){
    int x = 10;
    int y = 20;

    int* ptr = &x;
    *ptr *= 2;
    int* ptr2 = &y;
    *ptr2 *= 3;

    cout << x << ", " << y << endl;
    cout << myFunction(2, 3);
}