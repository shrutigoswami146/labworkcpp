#include<stdio.h>
int main()
{
    int a=5;
    int *ptr=&a;
    printf("value of a is %d",*ptr);
    printf("address of a is %d",ptr);
    return 0;
}