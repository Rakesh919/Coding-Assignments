#include <iostream>
#include <cmath>
using namespace std;

     class Traingle{
      public: int x,y,s1,s2,s3;
        
        int dist(Traingle a1,Traingle a2){
        	return sqrt((a1.x-a2.x)*(a1.x-a2.x)+(a1.y-a2.y)*(a1.y-a2.y));
        }

        int area(int a,int b,int c){
            if(a==b && b==c){
                cout<<"equilateral triangle\n";
                
            }

            else if(a==b || a==c || b==c){
                
                cout<<"scaler\n";     
            }

            else{
              cout<<"isoceles\n";
            }

          int s = ((a+b+c)/2);
          // int s =45;
          // cout<<s<<endl;
          // cout<<s-a<<endl<<s-b<<endl<<s-c<<endl;
         int ar = sqrt(s*(s-a)*(s-b)*(s-c));
          

        return  ar;
        }
     };
     
     
     int main(){
     	
     	Traingle a1,a2,a3;
     	a1.x=17; a1.y =28;
     	a2.x=14; a2.y =57;
     	a3.x=10; a3.y =28;
     	
     	
     	 a1.s1=a1.dist(a1,a2);
     	 a1.s2=a1.dist(a2,a3);
         a1.s3=a1.dist(a3,a1);

       
     	 
     	//  cout<<a1.area(a1.l,a1.b);
          
          cout<<a1.area(a1.s1,a1.s2,a1.s3);
     	
     	return 0;
     }