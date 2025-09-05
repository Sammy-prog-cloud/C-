#include <iostream>

using namespace std;

int main(){
    int sales;
    cout << "What was the amount of sales made today : ";
    cin >> sales;

    if (sales <= 10000){
        cout << "You have to pay 10% commission";
    }

    else if (sales <= 15000){
        cout << "You have to pay 15% commission";
    }
        
    else {
        cout << "You have to pay 20% commission";
    }

    return 0;
}
