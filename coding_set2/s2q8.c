#include<stdio.h>
int main(){
    int arr[3][3][3];
    printf("enter 3D array=");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            for (int k=0;k<3;k++) {
                scanf("%d",(*(*(arr+i)+j)+k));
            }
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("%d  ",*(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}