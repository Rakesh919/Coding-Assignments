#include <iostream>
using namespace std;

int main()
{
    int diff1 = 3, diff2 = 3;
    int start = 0, value = 1;

      int row =1;
    for (int i = 1; i <= 4; i++)
    {

        for (int j = 1; j <= row; j++)
        {
            value += diff1;
            diff1++;
        }

        start = value;

        diff2 = diff1;
        for (int k = 1; k <= row; k++)
        {
            start =start-diff2 + 1;
            cout << start << " ";
            diff2--;
        }
        row++;

        cout << endl;
    }

    return 0;
}
