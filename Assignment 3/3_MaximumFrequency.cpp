// Third qeustin 😎😎

#include <iostream>
using namespace std;

int frequency(int arr[], int size)
{

    int result[size];
    int max1 = 0;
    int index = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;

            if (max1 < count)
            {
                max1 = count;
                index = i;
            }
        }
        result[i] = count;
    }

    return arr[index];
}

int main()
{

    int arr[] = {2, 8, 8, 8, 8, 3, 2, 1, 5, 5, 8, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << frequency(arr, size);

    return 0;
}