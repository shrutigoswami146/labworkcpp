#include<iostream>
using namespace std ;
class account {
    int balance ;
    public:
account(){
    balance=0;
}
account(int b){
    balance = b;
}
void transfer(account *acc,int amount){
    acc->balance = acc->balance + amount ;
    balance = balance - amount ;
    cout<<"after transfer account that recived money="<<acc->balance<<endl ;
    cout<<"1st account after withdrawal ="<<balance<<endl;
}};
int main(){
    account a2(400),a1(500);
    a1.transfer(&a2,200);
    return 0;
}