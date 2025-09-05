#include <iostream>

using namespace std;

void swapNums(int x, int y){
    int z = x;
    x = y;
    y = z;
    //cout << x << ", " << y;
}

int main(){
    /*int x = 10;
    int y = 20; */
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before Swap : "
         << firstNum << ", " << secondNum << endl;
    
    cout << "After Swap : ";
    swapNums(firstNum, secondNum);
    cout << firstNum << ", " << secondNum;
}