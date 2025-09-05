#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream file("numbers.bin", ios::binary);
    if (file.is_open()){
        int number;
        while (file.read(reinterpret_cast<char*>(number), sizeof(number))){
            cout << number << endl;
        }
        file.close();
    }
}