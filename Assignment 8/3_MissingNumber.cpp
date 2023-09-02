#include<iostream>
using namespace std;

int missingNumber(int arr[],int num){
    int n=num+1;
    int sum =(n*(n+1))/2;
    int sum2=0;

    for(int i=0;i<n-1;i++){
        sum2+=arr[i];
    }
    int missing =sum-sum2;
    return missing ;
}

int main(){
    int arr[] ={6,1,2,8,5,7,10,3,4};
    int n =sizeof(arr)/sizeof(int);

    cout<<"Missing number is: "<<missingNumber(arr,n);
    return 0;
}