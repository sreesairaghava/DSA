#include <stdio.h>
#include <iostream>

using namespace std;

//Function to getLargestElement
int getLargestElement(int arr[], int size)
{
    int res = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

//Main
int main()
{
    //Init Array
    int arr[] = {300, 5, 60, 7, 21};
    std::cout << "Largest" << std::endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = getLargestElement(arr, n);
    cout << arr[largest] << endl;
    return 0;
}