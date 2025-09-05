#include <iostream>

using namespace std;

int main(){
    bool ship[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };
    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 4){
        int row, column;
        cout << "Selecting the coordinates" << endl;
        cout << "Choose a row number between 0 and 3 : ";
        cin >> row;
        cout << "Choose the number of columns between 0 and 3 : ";
        cin >> column;
        if (ship[row][column]){
            ship[row][column] = 0;
            hits ++;
            cout << "Hit! " << (4-hits) << "left.\n\n";
        }else{
            cout << "Miss \n\n";
        }
        cout << "Victory!" << endl;
        cout << "You won in " << numberOfTurns << " turns \n\n";
    }
}