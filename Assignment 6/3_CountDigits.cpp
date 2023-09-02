#include<iostream>
using namespace std;

int countlength(char str[]){

  int count =0;
  
  int i=0;
  while(str[i]!='\0'){
    if(str[i]>='0' && str[i]<='9'){
        count++;   
    }
    i++;
  }

  return count;
}

int main()
{
    char str[]="2Raman01Classes9";
    // int l=str.size();
    int size =sizeof(str)/sizeof(char);
    cout<<"Number of integers: "<<countlength(str);
  
  return 0;
}