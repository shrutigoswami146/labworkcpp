#include<stdio.h>
int strlength (char *s) {
    int l ;
    for(l=0;*s!='\0';l++){
        s++ ;
    }
    return l ;
}
int main() {
    char a[100] ;
    printf("enter string=");
    scanf("%s",a);
    int c= strlength (a);
    printf("length is %d",c);
    return 0;

}