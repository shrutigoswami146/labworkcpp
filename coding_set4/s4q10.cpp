#include<iostream>
using namespace std ;
class employee {
    public:
    int id; 
    int salary ;
employee(){
    id=0;
    salary=0;
}
employee(int i ,int s){
    id=i;
    salary=s;
}
void updateSalary(employee &e){
    salary == e.salary ;
    cout<<"updated salary"<<e.salary<<endl ;
}
};
void swap(employee *e1,employee *e2){
    int temp ;
    temp=e1->salary ;
    e2->salary = temp ;
    e1->salary = e2->salary ;
    cout<<"after swapping salary of 1st is rs "<<e1->salary<<endl ;
   cout<< " and of 2nd is rs "<<e2->salary;
}
int main(){
    employee e1(241103011,50000),e2(231168210,2000);
  swap(&e1,&e2);
  e1.updateSalary(e2);
  return 0;
}