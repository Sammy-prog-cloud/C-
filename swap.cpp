#include <iostream>

using namespace std;

void swap(int *first, int *second)
{
    int z = *first;
    *first = *second;
    *second = z;
}

int main()
{
    int first = 10;
    /*
        Note that it's not necessary to name the integer as first again,
        You can name it what e.g i can name it as int x = 10;
        All i have to do is to make sure when i'm referencing the values, i make use of
        the name of the variable i named it as i.e swap(&x)
        And finally when i'm to output the value, i'm also to use the name of the variable.
        As cout << x
    */
    int second = 20;
    swap(&first, &second);
    cout << first << ", " << second;
    return 0;
}
