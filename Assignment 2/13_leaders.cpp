#include <iostream>
using namespace std;


void leaders(int arr[],int size){
    
    int max =arr[size-1];
    cout<<"Leaders: "<<arr[size-1]<<" ";

    for(int i=size-1;i>=0;i--){
        if(arr[i]>max){
        cout<<arr[i]<<" ";
        max =arr[i];
    }
    }
}

int main()
{
    int arr[] ={12,15,12,67,5,12};
    int size =sizeof(arr)/sizeof(int);

    leaders(arr,size);
    return 0;
}