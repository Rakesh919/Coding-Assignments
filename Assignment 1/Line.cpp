
#include <iostream>
#include <cmath>
using namespace std;

class Line{
    public: int x, y;

    float dist(Line a1,Line a2){
    return sqrt((a1.x-a2.x)*(a1.x-a2.x)+(a1.y-a2.y)*(a1.y-a2.y));
    }
    
};

int main()
{
  Line a1,a2;
  a1.x =10;a1.y=15;
  a2.x =3; a2.y =6;

  cout<<a1.dist(a1,a2);
  
 return 0;
}