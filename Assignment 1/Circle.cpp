#include <iostream>
using namespace std;

class circle{
    public: int x,y,radius;

   //public: float area();

   float area(){
    return 3.14*radius*radius;
   }
   
   float circum(){
   	return 2*3.14*radius;
   }
};

int main(){
  circle p1;
  //circle p2;

  p1.x =10;
  p1.y =20;

  //p2.x =15;
  //p2.y=5;
  p1.radius=10;


cout<<"Area of circle:"<<p1.area();
cout<<"\nCircumference of circle:"<<p1.circum();

    
    return 0;
}