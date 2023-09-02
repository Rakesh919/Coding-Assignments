#include<iostream>
using namespace std;

int reverse(int n,int rev){
    if(n==0) return rev;
    return reverse(n/10,rev*10+n%10);
}

int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    int rev =reverse(n,0);

    if(rev==n)
    cout<<" Pallindrome..";

    
    cout<<"Not pallindrome..";

    return 0;
}