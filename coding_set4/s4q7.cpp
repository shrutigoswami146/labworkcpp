#include<iostream>
using namespace std ;
class time{
    public:
    int hour ;
    int min ;
    time(){
        hour=0;
        min=0;
    }
    time(int h, int m){
        hour=h ;
        min=m;
    }
    void addtime(time &t) {
      min= min + t.min ;
      hour =hour+t.hour ;
      if(min>=60){
        hour+= min/60 ;
        min=min%60 ;
      }
      cout<<"hour="<<hour<<"  min="<<min<<endl ;
    }
};
int main(){
    time t1(4,60),t2(3,140);
    t1.addtime(t2);
    return 0;
}
