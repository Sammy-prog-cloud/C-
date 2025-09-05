#include <iostream>

using namespace std;

int main(){
    cout << "How many rows ? ";
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++){
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}