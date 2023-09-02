#include <iostream>
using namespace std;

void binaryXor(int first[],int second[],int size)
{
   int result[size];
   for(int i=0;i<size;i++){
    result[i] =first[i]^second[i];
   }

   for(int i=0;i<size;i++){
    cout<<result[i]<<" ";
   }
}

int main(){

    int first[] = {1,0,1,1};
    int second[] ={1,1,1,1};
    int size = sizeof(first) / sizeof(int);

    binaryXor(first,second,size);
     
    return 0;
}