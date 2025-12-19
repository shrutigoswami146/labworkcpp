#include<iostream>
using namespace std ;
class complex {
    public:
    int real ;
    int img ;
    complex(int r, int i ){
        real=r;
        img=i;
    }
   void add(complex c){  
   int newr , newi;
   newr = real +c.real ;
   newi = img + c.img ;
   cout<<"real="<<newr<<endl ;
   cout<<"img="<<newi<<endl  ;
    }
};
int main(){
    complex c1(2,4) , c2(4,5);
    c1.add(c2);
    return 0;
}
