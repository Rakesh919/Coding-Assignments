#include<iostream>
using namespace std;

int sum(int arr[][3],int row,int col){
 int sumval =0;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sumval+=arr[i][j];
    }
}

return sumval;
}

int main(){
 
 int arr[3][3] ={{1,2,3},
                 {4,5,6},
                 {7,8,9}};

cout<<"Sum of 2d matrix: "<<sum(arr,3,3);

    return 0;
}