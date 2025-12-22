#include<iostream>
using namespace std ;
class point {
    public:
  int x;
  int y;
  point(int a,int b){
  x=a;
  y=b;
  }};
  void display(point p){
    cout<<"x="<<p.x<<"  y="<<p.y<<endl ;
  }
  int main(){
    point p1(10,20);
    display(p1);
  return 0;
  }