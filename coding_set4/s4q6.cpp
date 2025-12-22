#include<iostream>
using namespace std ;
class box{
    public:
    int length ;
    int width ;
    int height ;
    box(){
        length=0;
        width=0;
        height=0;
    }
    box(int l , int w, int h){
        length=l ;
        width=w;
        height=h;
    }
    void display(){
        cout<<"length="<<length<<endl ;
        cout<<"width="<<width<<endl ;
        cout<<"height="<<height<<endl ;   
    }
    void compare(box b1){
        if(length*width*height > b1.length * b1.width *b1.height){
        cout<<"box 1 have more volume"<<endl ;
        }
       else if(length*width*height < b1.length * b1.width *b1.height){
        cout<<"box 2 have more volume"<<endl ; }
        else{
             cout<<"same volume";
        }
    }
};
int main(){
    box b1(2,3,4),b2(5,6,7);
    b1.compare(b2);
}