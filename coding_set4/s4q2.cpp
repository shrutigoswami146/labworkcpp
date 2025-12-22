#include<iostream>
using namespace std ;
class rectangle {
    public:
    int length ;
    int breadth ;
    rectangle(int l,int b){
        length=l ;
        breadth=b ;
        cout<<"length="<<length<<endl;
        cout<<"breadth="<<breadth<<endl;
    }
};
void scale(rectangle &r){
 cout<<"doubled length="<<r.length*2<<endl ;
 cout<<"doubled breadth="<<r.breadth*2<<endl ;
}
int main(){
    rectangle r1(3,9);
    scale(r1);
    return 0;
}