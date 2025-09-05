# include <iostream>

using namespace std;


int main(){
cout << "1- Create an account " << endl
     << "2- Change Password " << endl
     << "3- Quit" << endl
     << "Select an Option : ";

int input;
cin >> input;

switch (input)
{
case 1:
    cout << "You selected 1" << endl;
    break;

case 2:
    cout << "You selected 2" << endl;
    break;

default:
    cout << "Are you sure you want to quit ?" << endl;
    break;
}


int i;
for (i = 0; i < 5; i++){
    cout << i << endl;
}

cout << "Enter in a positive number : ";
int number;
cin >> number;

if (number < 0)
    cout << "Error! You've entered an Invalid number";
else {
    int factorial = 1;
    for (int i = 1; i <= number; i++)
        factorial *= i;
    cout << "The factorial of " << number << " : " << factorial;
}

}
