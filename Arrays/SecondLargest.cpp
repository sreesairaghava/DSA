#include <iostream>

using namespace std;
//Function takes arr and size of array
// Returns the index of second largest element of array
int getSecondLargest(int arr[], int size)
{
    // Assume index of largest array is 0 and second largest doesn't exist (-1)
    int largest = 0, secondLargest = -1;
    // Loop from second elemement and compare with largest
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[largest])
        {
            // If the element at current index (i) is greater that largest
            // Make largest as second largest and current element at i as largest
            secondLargest = largest;
            largest = i;
        } // Else block checks if the element at i is not equal to largest element
        else if (arr[i] != arr[largest])
        {
            if (secondLargest == -1 || arr[i] > arr[secondLargest])
            {
                secondLargest = i;
            }
        }
    }
    return secondLargest;
}
//Main function
int main()
{
    int arr[] = {2, 150, 3, 5, 21, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int second = getSecondLargest(arr, size);
    cout << arr[second] << endl;
    return 0;
}