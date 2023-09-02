#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int size){
  int decimal=0;

  for(int i=0;i<size;i++){
    if(arr[i]==1){
      int power =size-1-i;
      decimal +=pow(2,power);
    }

  }
  return decimal;
}


int main(){
         int first[] ={1, 0, 1, 0};
         int second[] ={1, 0, 0, 0};
         int size =sizeof(first)/sizeof(int);
         int a=binary(first,size);
         int b=binary(second,size);

         cout<<a-b;

        
    //   cout<<binaryToDecimal(1001001);
    return 0;
}