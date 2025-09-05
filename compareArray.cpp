#include <iostream>

using namespace std;

int main()
{
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};

    bool areEqual = false;
    for (int i = 0; i < sizeof(first); i++)
        if (first[i] != second[i])
        {
            areEqual = true;
            break;
        }
    cout << areEqual << endl;
    cout << boolalpha << areEqual << endl;
}