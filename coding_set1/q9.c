#include<stdio.h>
int main() {
    char *a[6];
     a[0]="apple";
     a[1]="mango";
     a[2]="pear";
     a[3]="banana";
     a[4]="lichi";
    for (int i=0;i<5;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}
