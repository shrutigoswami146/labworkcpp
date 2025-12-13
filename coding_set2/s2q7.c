#include<stdio.h>
void sum(int m,int n, int o,int arr[m][n][o]){
    int sum=0 ;
    for(int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            for(int k=0;k<o;k++) {
                sum += arr[i][j][k];
            }
        }
    }
        printf("sum is %d", sum);
    
}
int main() {
    int m,n,o;
    printf("enter m=");
    scanf("%d",&m);
    printf("enter n=");
    scanf("%d",&n);
    printf("enter o=");
    scanf("%d",&o);
    int arr[m][n][o];
    printf("enter 3D array=");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<o;k++) {
                scanf("%d",&arr[i][j][k]);
            }
            printf("\n");
        }
    }
    sum(m,n,o,arr);
    return 0;
}