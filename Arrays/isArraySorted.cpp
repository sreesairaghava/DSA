#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {10, 15, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << isSorted(arr, size) << endl;
    return 0;
}