#include <iostream>
using namespace std;

int StrikeRate(int runs[], int balls[], int size)
{
    int max = 0;
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        score = (runs[i] / balls[i]) * 100;

        if (score > max)
            max = score;
    }
    return max;
}

int main()
{

    int runs[] = {10, 5, 7, 18, 6};
    int size = sizeof(runs) / sizeof(int);

    int balls[] = {4, 2, 3, 17, 2};

    cout << StrikeRate(runs, balls, size);
    return 0;
}