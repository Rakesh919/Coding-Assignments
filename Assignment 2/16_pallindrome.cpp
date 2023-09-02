#include <iostream>
using namespace std;

 int pallindrome(int arr[],int size)
 {
    
    int s=0,e=size-1;
    while(s<e){
        if(arr[s]!=arr[e])
        s++;
        e--;
         return 1;
    }
    return 0;
 }

int main(){

    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr) / sizeof(int);
    if(pallindrome(arr,size)){
        cout<<"Pallindrome";
    }
    else{
        cout<<"NOt pallindrome";
    }
     
    return 0;
}
