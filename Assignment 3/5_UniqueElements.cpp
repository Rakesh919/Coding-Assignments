// Fifth question 😎😎

#include<iostream>
using namespace std;

void unique(int arr[],int size){

 int count =1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){

            if(i==j)
            continue;

            if(arr[i]==arr[j])
            count++;

        }
        if(count==1)
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] ={3 ,5 ,8 ,7 ,9 ,6 ,3 ,4 ,5 ,7};
    int size =sizeof(arr)/sizeof(int);
    
    unique(arr,size);
    return 0;
}