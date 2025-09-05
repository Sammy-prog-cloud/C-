#include <iostream>

using namespace std;

int max(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    else {
        return num2;
    }
}


int main()
{
    // int number = 0;
    // while (number < 1 || number > 5)
    // {
    //     cout << "Number : ";
    //     cin >> number;
    //     if (number < 1 || number > 5)
    //         cout << "Enter in a number between 1 to 5 ";
    // }
    // return 0;
    // int guess = 0;
    // int secretNumber = 7;
    // while (guess != secretNumber){
    //     cout << "Guess : ";
    //     cin >> guess;
    //     if (guess != secretNumber){
    //         cout << "Try Again !" << endl;
    //     }
    //     else{
    //         cout << "You guessed right !!!";
    //     }        
    // }
    // cout << "Rows : ";
    // int rows;
    // cin >> rows;
    // for (int i = 1; i <= rows; i++){
    //     for (int j = 0; j < i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;  
    // }
    int checkMax = max(-1, -3);
    cout << checkMax << endl; 
}