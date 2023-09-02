#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter value of x and y number:";
    int x,y;
    int z=0;
    cin>>x>>y;

    cout<<"Enter size:";
    cin>>z;
    // cout<<endl;

     int sum =0;
    for(int i=0;i<z;i++){
        cout<<x<<" ";
        x+=y;
    }
    return 0;
}