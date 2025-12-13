#include<stdio.h>
void findmaxmin (int *arr, int n , int *max , int *min) {
    *max=arr[0];
    *min=arr[0];
for (int i=1;i<n;i++) {
    if( arr[i]> *max ){
        *max=arr[i] ; }}
        printf("max is %d",*max);

for (int i=1;i<n;i++){
    if (arr[i]<*min){
        *min=arr[i] ;}}
        printf("min is %d",*min);
    
}
int main(){
    int n;
    int max;
    int min;
    printf("enter n=");
    scanf("%d",&n);
    int arr[n];
    printf("enter array");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);   
}
findmaxmin(arr,n,&max,&min);
return 0;
}
