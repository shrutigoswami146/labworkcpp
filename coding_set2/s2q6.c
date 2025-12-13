#include<stdio.h>
void maxrow(int m, int n, int arr[m][n] ){
    for(int i=0;i<m;i++){
        int max=*(*(arr+i)+0);
        for (int j=1;j<n;j++){
            if(*(*(arr+i)+j)> max){
            max=*(*(arr+i)+j);
            }
             printf("max of row %d is %d",i+1,max);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("enter m=");
    scanf("%d",&m);
    printf("enter n=");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter array=");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    maxrow(m,n,arr);
    return 0;
}