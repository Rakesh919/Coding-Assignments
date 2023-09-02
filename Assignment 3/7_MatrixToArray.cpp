// Seventh questino 😎😎

#include<iostream>
using namespace std;

void arrayToMatrix(int arr[3][3],int row,int col){

      int even[row*col];
      int odd[row*col];
          int k=0,count1=0;
          int l=0,count2=0;


      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]%2==0){
            even[k]=arr[i][j];
            k++;
            count1++;
            }

            else{
                odd[l]=arr[i][j];
                l++;
                count2++;
            }
        }
      }
      cout<< "Even numbers:"<<endl;

    for(int i=0;i<count1;i++){
        cout<<even[i]<<" ";
    }

cout<<endl<<"Odd numbers: "<<endl;
    for(int i=0;i<count2;i++){
        cout<<odd[i]<<" ";
    }

      
}

 int main() {

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    arrayToMatrix(arr,3,3);

    return 0;
}