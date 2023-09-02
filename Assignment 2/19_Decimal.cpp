#include <iostream>
using namespace std;

void decimal(int n){
     
    //  int arr[5];
    // int ans =0;
    // int rem=0;
    // int i=0;
    int rem =0;
    while(n!=0){
       
       rem =n%2;
      cout<<rem;
        n=n/2;
    }
  
}

int main(){

   int n =5;
    // int size = sizeof(arr) / sizeof(int);


     decimal(n);
    return 0;
}