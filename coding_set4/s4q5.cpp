#include<iostream>
using namespace std ;
class student {
    public:
    int marks ;
    string name ;
    student(){
        marks=0;
        name="0";
    }
    student(int m,string n){
        marks=m ;
        name=n;
    }
    void display(){
        cout<<"marks="<<marks<<endl ;
        cout<<"name="<<name<<endl ;
    }

};
void compare(student &s1 , student &s2){
if (s1.marks > s2.marks){
cout<<s1.name<<" marks are greater";
}
else if(s2.marks > s1.marks){
    cout<<s2.name<<" marks are greater"<<endl ;
}
else{
    cout<<"both have equal marks"<<endl;
}
}
int main(){
    student s1(90,"shruti"),s2(40,"pinki");
    compare(s1,s2);
    return 0;
}