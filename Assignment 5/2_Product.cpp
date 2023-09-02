#include<iostream>
using namespace std;


int product(int a,int b){
    if(b==0) return 0;
    return a+product(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;

    cout<<"Product of a and b is:"<<product(a,b);
    return 0;
}