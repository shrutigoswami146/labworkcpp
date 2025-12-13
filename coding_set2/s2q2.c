#include<stdio.h>
int main() {
    int n;
    printf("enter n=");
    scanf("%d",&n);
    int arr[n] ;
    int *ptr=arr ;
    printf("enter array=");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("reversed array is=");
    for(int i=n-1;i>=0;i--){
     printf("%d\n",*(ptr+i));
    }
    return 0;
}
