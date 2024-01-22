//Write a cpp program to find largest and second largest number in an array.
#include <iostream>
using namespace std;

int main()
{
    int s;
    int largest, second_largest;
    cout << "Enter the size of the array: ";
    cin >> s;
    int arr[s];
    for(int z = 0; z < s; z++)
    {
        cout << "Enter " << z+1 << " element: ";
        cin >> arr[z];
    }

    largest = arr[0];
    second_largest = arr[0];
    for(int j = 0; j < s; j++)
    {
        if (arr[j] > largest)
        {
            largest = arr[j];
        }
    }
    for(int i = 0; i < s; i++)
    {
        if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    cout << "Second largest element: " << second_largest << endl;
}