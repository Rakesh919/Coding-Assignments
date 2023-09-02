#include <iostream>
using namespace std;

void merge(int first[],int second[],int size)
{
    int n =size;
    int i=0,j=0,k=0;
    int result[2*n];
    while(i<n && j<n){
        if(first[i]<=second[j]){
            result[k]=first[i];
            i++;
            k++;
        }
        else{
            result[k]=second[j];
            j++;
            k++;
        }
    }

    while(i<k){
        result[k]=first[i];
        i++;
        k++;
    }

    while(j<k){
        result[k]=second[j];
        j++;
        k++;
    }

    for(int i=0;i<2*n;i++){
        cout<<result[i]<<" ";
    }

}

int main(){

    int first[] = {10,12};
    int second[] ={11,13};
    int size = sizeof(first) / sizeof(int);

    merge(first,second,size);
     
    return 0;
}