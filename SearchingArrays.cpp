#include <iostream>

using namespace std;

int find(int numbers, int size, int target)
{
    int index = 0;
    for (int num : numbers)
    {
        if (num == target)
        {
            return index;
        }
        index ++;
    }
    return -1;
}

int main()
{
    int numbers[] = {10, 20, 30, 40};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << find(numbers, 3, 10);
}