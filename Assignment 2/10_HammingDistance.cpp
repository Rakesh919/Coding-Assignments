#include <iostream>
using namespace std;

 int distance(int arr[],int num[],int n,int m)
 {
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=num[i])
        count++;
    }
    return count;
 }

int main(){

    int arr[] ={1,0,1,0,1};
    int num[] ={1,0,0,1,0};
    int n =sizeof(arr)/sizeof(int);
    int m =sizeof(num)/sizeof(int);
    
    cout<<distance(arr,num,n,m);
     
    return 0;
}