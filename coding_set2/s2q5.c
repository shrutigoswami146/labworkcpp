#include<stdio.h>
void transpose(int n, int arr[n][n]) {
    int arrt[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arrt[j][i]=arr[i][j];
        }
    }
    printf("transpose matrix=");
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
      printf("%d  ",arrt[i][j]);       }
      printf("\n");
    }
}
int main(){
    int n;
    printf("enter n=");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter array=");
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(n,arr);
    return 0;
}