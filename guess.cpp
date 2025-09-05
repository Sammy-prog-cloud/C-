#include <iostream>


using namespace std;

void greet(){
    cout << "Hello World!" << endl;
}
 
 int main(){
    int secret = 7;
    int guess = 0;
    while (guess != secret){ 
        cout << "Guess: ";
        cin >> guess;
        continue;  
    } 

    int number;
    do {
        cout << "Enter in a number between 1 - 7 : ";
        cin >> number;
    } while(number < 1 || number > 7);


    cout << "Rows : ";
    int rows;
    cin >> rows;

    for (int i = rows; i <= rows; i++){
            cout << "*" << endl;
    }


    greet();
    cout << "Done";
 }
        