// Find maximum element in an array..
#include <iostream>
using namespace std;


int max1(int arr[],int index){
  if(index==0) return arr[0];
   int temp =max1(arr,index-1);
   if(arr[index]>temp)
  return arr[index];

  return temp;
}

int main(){
     
     int arr[] ={5,10,11,8,6};
     int index =sizeof(arr)/sizeof(int)-1;
     cout<<max1(arr,index);
    return 0;
}