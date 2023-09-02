#include <iostream>
using namespace std;

void modify(int first[],int second[],int size){

   int result[size];
   for(int i=0;i<size;i++){

          if(first[i]%2==0 && second[i]%2==0)
          result[i]=first[i]+second[i];

          else if(first[i]%2!=0 && second[i]%2!=0)
          result[i]=first[i]*second[i];

          else if((first[i]%2==0 && second[i]%2!=0) || (first[i]%2!=0 && second[i]%2==0))
          result[i]=first[i];
   }

   for(int i=0;i<size;i++){
    cout<<result[i]<<" ";
   }
}

int main(){

    int first[] = {10 ,5, 7, 18, 6};
    int second[] ={2 ,3, 4, 5, 8};
    int size = sizeof(first) / sizeof(int);
    modify(first,second,size);
     
    return 0;
}