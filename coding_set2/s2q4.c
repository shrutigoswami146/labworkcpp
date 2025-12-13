#include<stdio.h>
void sum(int m, int n , int arr1[m][n],int arr2[m][n]){
    int arr3[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
printf("sum is=\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d  ",arr3[i][j]);
    }
    printf("\n");
}
}
int main(){
    int m,n;
    printf("enter no. of rows m=");
    scanf("%d",&m);
    printf("enter no. of columns n=");
    scanf("%d",&n);
    int arr1[m][n];
    int arr2[m][n];
    printf("enter elements for arr1 =\n");
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter elements for arr2=\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    sum(m,n,arr1,arr2);
    return 0;
}