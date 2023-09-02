#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int k){
   for(int i=0;i<n;i++){
    if(arr[i]==k)
    return i;
   }
   return -1;
}


int main(){
    int arr[]={1,2,3,4,5};
    int size =sizeof(arr)/sizeof(int);
    int k;
    cout<<"Enter value which you want to search: ";

    cin>>k;
    int ans =LinearSearch(arr,size,k);
    if(ans==-1)
    cout<<"Element not found..";

    else
    cout<<" Element found at.."<<ans<<" index";

    return 0;
}