#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a number:";
    int n;
    cin>>n;

    int x =2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }

        for(int k=0;k<x;k++){
            cout<<"*";
        }
        x=x-2;
        cout<<endl;
    }
}