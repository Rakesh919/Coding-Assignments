// Fourth question 😎😎

#include <iostream>
using namespace std;

void frequency(int arr[], int size, int k)
{

    int result[size];

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        result[i] = count;
    }

    for (int i = 0; i < size; i++)
    {
        if (result[i] == k)
            cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {2, 3, 2, 3, 5};
    int size = sizeof(arr) / sizeof(int);
    frequency(arr, size, 2);

    return 0;
}