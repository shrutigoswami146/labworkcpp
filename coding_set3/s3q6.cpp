#include<iostream>
using namespace std;
class filehandler {
    public:
    filehandler(){
        cout<<"constructor"<<endl;
        cout<<"file opened"<<endl;
    }
    ~filehandler(){
        cout<<"destructor"<<endl;
        cout<<"file closed"<<endl ;
    }
};
int main(){
    filehandler();
    return 0;
}