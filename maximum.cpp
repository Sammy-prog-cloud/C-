#include <iostream>

using namespace std;

int max(int first, int second){
    return (first > second) ? first : second;
}

int main(){
    int larger = max(1, 3);
    cout << larger;
}
