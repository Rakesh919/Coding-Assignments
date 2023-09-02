#include<iostream>
using namespace std;

int main(){

      int n;
    cout<<"Enter a number:";
    cin>>n;

//  UPPER SIDE OF THE PYRAMID..😎😎

    for(int i=0;i<n-1;i++){

        for(int j=n-1;j>=i;j--)
        {
            
            cout<<" ";
        }

        for(int j=0;j<=i*2;j++){
            cout<<"*";
        }

        cout<<endl;
    }



    //  LOWER SIDE OF THE PYRAMID..😎😎

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

    return 0;
}