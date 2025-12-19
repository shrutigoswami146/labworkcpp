#include<iostream>
using namespace std;
class rectangle {
    public:
    int length;
    int breadth ;
    void input(int l,int b){
        length=l;
        breadth=b;
    }
    void display() {
        cout<<"length="<<length<<endl ;
        cout<<"breadth="<<breadth<<endl ;
    }
    void area();
};
void rectangle::area() {
  cout<<"area="<<length*breadth<<endl ;
}
int main(){
    rectangle r1;
    r1.input(20,40);
    r1.display();
    r1.area();
    return 0;
}

