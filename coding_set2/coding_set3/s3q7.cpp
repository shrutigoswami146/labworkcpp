#include<iostream>
using namespace std ;
class car {
    public:
    int price;
    string brand ;
    car(car &c){
    brand=c.brand ;
    price=c.price;
    }
    car(int p,string b){
        price=p ;
        brand=b ;
    }
    void display(){
        cout<<"brand="<<brand<<endl ;
        cout<<"price= Rs"<<price<<endl ;
        }
};
int main(){
    car c1(2000000,"mercedes");
    c1.display();
    car c2=c1 ;
    c2.display();
    return 0;
}