#include<stdio.h>
int main(){
    char *arr[5]={"shru","shaan","pallu","timbu","oju"};
    for(int i=0;i<5;i++){
        printf("%s  ",*(arr+i));
    }
    return 0;
}