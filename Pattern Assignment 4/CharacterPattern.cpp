#include<iostream>
using namespace std;

int main(){

 int n=10;

   char x ='A';
   char y ='Z';

  for(int i=0;i<n;i++){
    cout<<x<<y<<" ";
    x=x+2;
    y=y-1;
  }
    return 0;
}