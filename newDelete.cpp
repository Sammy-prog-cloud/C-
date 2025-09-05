#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numGuests;
    cout << "How many guests? : ";
    cin >> numGuests;

    if (numGuests <= 0)
    {
        cout << "Number of Guests must be at least 1 \n";
        return 0;
    }
    cin.ignore();
    string *guests = new string[numGuests];

    for (int i = 0; i < numGuests; i++)
    {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]);
    }

    cout << "\nGuest checked in : \n";
    for (int i = 0; i < numGuests; i++)
    {
        cout << guests[i] << endl;
    }

    delete[] guests;
    return 0;
}