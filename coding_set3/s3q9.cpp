#include<iostream>
using namespace std ;
class time {
    public:
int hour ;
int min ;
time(){
    hour=0;
    min=0;
}
time(int h,int m){
    hour=h;
    min=m;
}
time addTime(time t){
    time temp ;
    temp.hour= hour+t.hour ;
    temp.min=min+t.min ;
    if(temp.min>=60){
       temp.hour+=temp.min/60 ;
       temp.min = temp.min % 60 ;
       }
       return temp ;
    }
    void display(){
        cout<<"hour="<<hour<<endl ;
        cout<<"min="<<min<<endl ;
    }
};
int main(){
    time t1(2,40),t2(4,60);
    time t3= t1.addTime(t2) ;
    t1.display();
    t2.display();
    cout<<"\n";
    cout<<"sum";
    cout<<"\n" ;
    t3.display();
    return 0;
}