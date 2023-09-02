#include <iostream>
#include <cmath>
using namespace std;

     class Rectangle{
      public: int x,y,l,b;
      
        float area(int l,int b){
        	return l*b;
        }
        
        float dist(Rectangle a1,Rectangle a2){
        	return sqrt((a1.x-a2.x)*(a1.x-a2.x)+(a1.y-a2.y)*(a1.y-a2.y));
        }
     };
     
     
     int main(){
     	
     	Rectangle a1,a2,a3,a4;
     	a1.x=1; a1.y =2;
     	a2.x=4; a2.y =7;
     	a3.x=1; a3.y =2;
     	a4.x=1; a4.y =2;
     	
     	 a1.l=a1.dist(a1,a2);
     	 a1.b=a1.dist(a2,a3);
     	 
     	 cout<<a1.area(a1.l,a1.b);
     	
     	return 0;
     }