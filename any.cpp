#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[20];

    cout << "Enter the elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Searches for duplicate element
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                cout << arr[j] << " ";
            // break;
        }
    }

    return 0;
}