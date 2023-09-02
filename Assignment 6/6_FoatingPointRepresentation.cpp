#include<iostream>
using namespace std;

string floatingPoint(char str[],int size){
    for(int i=0;i<size;i++){
        if(str[i]=='.'){
            return "Valid";
        }
    }
    return "INvalid";

}

int main(){
  char str[] ="1e53";
  int size =sizeof(str)/sizeof(char);
  cout<<floatingPoint(str,size);

  return 0;
}