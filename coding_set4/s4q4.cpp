#include<iostream>
using namespace std;
class complex {
    public:
    int real ;
    int imag ;
    complex(){
        real=0;
        imag=0;
    }
    complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<"real ="<<real<<endl ;
        cout<<"imag ="<<imag<<endl ;
    }
};
complex add(complex c1,complex c2){
    complex temp;
    temp.real=c1.real+c2.real ;
    temp.imag=c1.imag + c2.imag ;
    return temp ;
}
int main(){
    complex c1(3,5),c2(6,8);
    complex c3;
    c3=add(c1,c2);
    c3.display();
    return 0;
}