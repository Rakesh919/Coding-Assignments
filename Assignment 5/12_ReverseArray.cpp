// Reverse an array using recursion..
#include<iostream>
using namespace std;

// Creating reverse method to reverse the array..
void reverse(int arr[],int s,int e){
    if(s>=e) return;
    int temp =arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
      reverse(arr,s+1,e-1);
      return;
}

int main(){
   int arr[] ={1,2,3,4,5};
   int s=0;
   int e=sizeof(arr)/sizeof(int)-1;
   cout<<"Before reversing: ";
   for(int i:arr){
    cout<<i<<" ";
   }
   cout<<endl;
   reverse(arr,s,e);
   

   cout<<"After reversing the array: ";

   for(int i:arr){
    cout<<i<<" ";
   }
    return 0;
}