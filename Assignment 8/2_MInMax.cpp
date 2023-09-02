#include<iostream>
#include<limits.h>
using namespace std;

void minMax(int arr[],int n){

  int mini=INT_MAX;
  int maxi =INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]<mini)
    mini =arr[i];

    if(arr[i]>maxi)
    maxi =arr[i];
  }

  cout<<"Minimum value : "<<mini;
  cout<<endl;
  cout<<"Maximum value : "<<maxi;
}

int main(){
    int arr[]={3,2,1,56,10000,167};
    int size=sizeof(arr)/sizeof(int);
    minMax(arr,size);


    return 0;
}