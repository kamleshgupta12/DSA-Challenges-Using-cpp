#include <iostream>
using namespace std;

int sumOfArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}
int main()
{
    int array[] = {1, 2, 3,};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "sum  is:" << sumOfArray(array, size);
}