#include <iostream>

using namespace std;

void increasePrice(double* price){
    *price *= 1.2;
}

int main()
{
    // int numbers[] = {5, 10, 20, 30, 40};
    // int size = sizeof(numbers) / sizeof(int);
    // int *ptr = &numbers[size - 1];
    // while (ptr >= &numbers[0])
    // {
    //     cout << *ptr << endl;
    //     ptr--;
    // }
    double price = 100;
    increasePrice(&price);
    cout << price;
}