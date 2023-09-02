
// Sixth question 😎😎

#include <iostream>
using namespace std;

void frequency(int arr[], int size)
{

    int flag;
    int leftoccur = 0;
    for (int i = 0; i < size; i++)
    {
        leftoccur = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                leftoccur = 1;
        }
        if (leftoccur)
            continue;
        flag = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                flag++;
        }
        cout << arr[i] << " " << flag << endl;
    }
}

int main()
{

    int arr[] = {8, 5, 6, 5, 6, 7, 5, 9, 8, 8};
    int size = sizeof(arr) / sizeof(int);
    frequency(arr, size);

    return 0;
}