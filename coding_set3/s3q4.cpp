#include<iostream>
using namespace std;
class employee {
    public:
    int id;
    int salary ;
    employee(int i,int s){
        id=i;
        salary=s;
    }
    void display(){
        cout<<"id="<<id<<endl;
        cout<<"salary= Rs "<<salary<<endl ;
    }
};
int main(){
    employee e1(26237,30000),e2(26379,70000);
    e1.display();
    e2.display();
    return 0;
}