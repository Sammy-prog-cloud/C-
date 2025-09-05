#include <iostream>

using namespace std;

int main(){
    // string names[3];
    // cout << "firstName : ";
    // getline(cin, names[0]);

    // cout << "secondName : ";
    // getline(cin, names[1]);

    // cout << "middleName : ";
    // getline(cin, names[2]);

    // cout << names[0];
    // return 0;
    int i = 50;
    long ld = 12345678912345;
    char ch = 'a';
    float f = 334.230;
    double lf = 14049.304930000;
    cin >> i >> ld >> ch >> f >> lf;
    printf("%d\n %ld\n %c\n %f\n %lf", i, ld , ch, f, lf);
}