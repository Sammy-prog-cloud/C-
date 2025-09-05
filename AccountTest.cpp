#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account myAccount;
    cout << "Initial Account name is : " << myAccount.getName();
    cout << "\n Please enter the account name : ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);
    cout << "Name in object myAccount is : " << myAccount.getName() << endl;
}
