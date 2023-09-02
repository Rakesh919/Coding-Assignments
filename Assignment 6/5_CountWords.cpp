#include<iostream>
using namespace std;

int countSpaces(char str[],int size){
int count =0;
int l=size-1;
   for(int i=0;i<=l;i++){
          if(str[i]==' ' || i==l-1)
          count++;
   }   return count;

}

int main(){
   char str[]="Raman classes";
   int size =sizeof(str)/sizeof(char);
//    cout<<size;
//  int l=strlen()
   cout<<"NO. of words: "<<countSpaces(str,size);
    return 0;
}
