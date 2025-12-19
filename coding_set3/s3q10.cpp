#include<iostream>
using namespace std;
class report {
    public :
    string name ;
    int rollno;
    int marks[5];
    void input(string n,int r,int m[5]) {
        name=n ;
        rollno=r;
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
    }
    void display(){
        cout<<"name="<<name<<endl ;
        cout<<"rollno"<<rollno<<endl ;
        cout<<"marks  "<<endl ;
        for(int i=0;i<5;i++){
            cout<<marks[i]  <<endl ;
        }
    }
    void calculategrade(){
        int total=0 ;
        for(int i=0;i<5;i++){
        total += marks[i];
        }
       int p=(total/500.0)*100 ;
     cout<<"total="<<total<< endl ;
     cout<<"percentage="<<p<<"%"<<endl ;
    if(p <33){
        cout<<"grade Fail"<<endl ;
    }
    else if(p>=80){
        cout<<"grade A"<<endl ;
    }
    else if(50<=p<70){
        cout<<"grade B"<<endl ;
    }
    else if(33<=p<50){
        cout<<"grade C"<<endl ;
    }
    }
};
int main() {
    int arr1[5]={96,94,93,93,94};
    int arr2[5]={77,79,69,86,94};
    int arr3[5]={40,42,66,42,40};
    int arr4[5]={20,10,30,44,36};
    report r1,r2,r3,r4 ;
r1.input("shruti",39,arr1);
r2.input("shru",29,arr2);
r3.input("shrutika",11,arr3);
r4.input("pinki",30,arr4);
r1.display();
r1.calculategrade();
cout<<"\n";
r2.display();
r2.calculategrade();
cout<<"\n";

r3.display();
r3.calculategrade();
cout<<"\n";

r4.display();
r4.calculategrade();
cout<<"\n";

return 0;
}