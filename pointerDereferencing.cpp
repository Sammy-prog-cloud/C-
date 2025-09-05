#include <iostream>

using namespace std;

int main(){
    /*int x = 10;
    int y = 20;
    int* ptr = &x;
    *ptr *= 2;
    cout << *ptr << endl;*/ //This prints out 20 (i.e 10 * 2)

    /*ptr = &y;
    *ptr *= 3;
    cout << *ptr << endl;*/ //This prints out 60 (i.e 20 * 3)

    // Pointer is constant and cannot be changed
    int x =  20;
    int* const ptr =  &x;
    cout << *ptr << endl;

    // Data is constant in this scenario
    const int y = 40;
    const int* ptr_y = &y; 

    /* Note that if i were to set this to ptr, it'd give error
        since on line 18, i had already set ptr to a const */ 

    cout << *ptr_y; //
}