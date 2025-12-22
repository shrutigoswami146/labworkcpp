#include<iostream>
using namespace std ;
class circle {
    public:
    int radius;
    circle(int r){
        radius=r ;
        cout<<"radius="<<radius<<endl ;
    }
};
void increase(circle *c ){
c->radius = c->radius + 5;
cout<<"increased radius="<<c->radius;
}
int main(){
    circle c1(4);
   circle *c= &c1 ;
   increase(c);
   return 0;
}
