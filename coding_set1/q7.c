#include<stdio.h>
void reverse(int *arr, int n){
    int *ptr=arr ;
    printf("reversed array is=");
    for(int i=n-1;i>=0;i--){
printf("%d\n", *(ptr+i) );
    }
}
int main() {
    int n =6;
    int arr[6];
    int *ptr=arr;
    printf("enter array=");
    for (int i=0;i<6;i++){
        scanf("%d",(ptr + i));
    }
    reverse(arr,n);
return 0;
}