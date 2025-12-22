#include<iostream>
using namespace std ;
class matrix {
    public:
    int arr[2][2];
    void input(int a[2][2]){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                arr[i][j]=a[i][j];
            }
        }
    }
    matrix add(matrix &m){
        matrix temp ;
 for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        temp.arr[i][j]=arr[i][j]+m.arr[i][j];
       
    }
 }
  return temp;
    }
    void display(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<arr[i][j]<<"  " ;
            }
            cout<<"\n";
        }
    }

};
int main(){
    matrix m1,m2,m3;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{1,3}};
    m1.input(a);
    m2.input(b);
    m3=m1.add(m2);
    m3.display();
return 0;
}