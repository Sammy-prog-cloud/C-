#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream file;
    /* 
        It is a good practice to always save 
        the data as csv if you're working with csv.
    */
    file.open("Data.csv");
    if (file.is_open())
    {
        file << "id, title, year \n"
             << "1, Terminator, 1984 \n"
             << "2, Terminator, 1991 \n";
        file.close();
    }
}