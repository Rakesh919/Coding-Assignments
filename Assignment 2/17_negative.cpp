#include <iostream>
using namespace std;
 
 void negative(int arr[],int size){

    int result[size];
    int k=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0)
        {
            result[k]=arr[i];
            k++;
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>0){
            result[k]=arr[i];
            k++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";
    }
 }


 int main(){
    
    int arr[] ={15,-1,5,-5,2,1,8};
    int size =sizeof(arr)/sizeof(int);

    negative(arr,size);
    return 0;

 }