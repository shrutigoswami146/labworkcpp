#include<iostream>
using namespace std ;
class student {
    public:
    int rollno ;
    string name ;
    void display(){
        cout<<"name ="<<name<<endl ;
        cout<<"rollno="<<rollno<<endl ;
    }
};
int main() {
    student s1 ;
    s1.rollno=11;
    s1.name="shruti";
    s1.display();
    return 0;
}