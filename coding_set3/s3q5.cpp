#include<iostream>
using namespace std;
class circle {
    public:
    int radius ;
    circle(){
        radius=1;
    }
    circle(int r){
        radius=r;
    }
    void area(){
        cout<<"radius="<<radius<<endl ;
        cout<<"area="<<3.14*radius*radius<<endl ;
    }
};
int main(){
    circle c1(20),c2,c3(12);
    c1.area();
    c2.area();
    c3.area();
    return 0;
}
