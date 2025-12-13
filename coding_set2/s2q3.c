#include<stdio.h>
int main() {
   int sumeven=0;
   int sumodd=0;
   int n;
   printf("enter n=");
   scanf("%d",&n);
   int arr[n];
   int *ptr=arr;
   printf("enter array=");
   for(int i=0;i<n;i++){
    scanf("%d",(ptr+i));
   }
   for(int i=0;i<n;i++){
    if(*(ptr+i)%2==0){
        sumeven+=*(ptr+i);
    }
    else if(*(ptr+i)%2!=0){
        sumodd+=*(ptr+i);
    }
   }
   printf("sum of even no.s=%d\n",sumeven);
   printf("sum of odd no.s = %d\n",sumodd);
   return 0;
}