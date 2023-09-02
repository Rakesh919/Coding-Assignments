#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "hr30g0471tvs@bike.$cash";
    int len = strlen(str), count = 0, max = 0;
    string result, value;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result + (str[i]);
            count++;
        }
        else
        {
            count = 0;
            result = "";
        }
        if (max < count){
            value = result;
             max = count;
        }
    }
    cout<<"Values are = ["<<value << "] with number of digits in the string are: "<< max<< endl;
}