// First question 😎😎

#include<iostream>
using namespace std;

 string twoSum(int arr[],int size,int target)
{
       for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]+arr[j]==target)
              return "Yes";
        }
       }
       return "No";

}
int main(){

    int arr[] ={1,10, 5, 6, 7};
    int size =sizeof(arr)/sizeof(int);
    cout<<"Enter a number:"<<endl;
    int target;
    cin>>target;
    cout<<twoSum(arr,size,target);
    return 0;
}