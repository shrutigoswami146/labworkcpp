#include<iostream>
using namespace std;
class book {
    public:
    string title ;
    string author ;
    int price;
    void input(string t,string a,int p){
        title=t;
        author=a;
        price=p;
    }
    void display() {
        cout<<"title :"<<title<<endl;
        cout<<"author :"<<author<<endl ;
        cout<<"price : Rs"<<price<<endl ;
    }
};
int main(){
book b1,b2,b3;
b1.input("maths","RD Sharma",500);
b1.display();
b2.input("romeo juliet","shakespeare",1000);
b2.display();
b3.input("harry potter","J.K Rowling",900);
b3.display();
}