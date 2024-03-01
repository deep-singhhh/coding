#include<stdio.h>
int main(){
    int r;
    printf("enter the no. of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the no. of columns:");
    scanf("%d",&c);
    printf("enter all the elements\n");
    int arr[r][c];  // r x c total elements
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of the given matrix is %d ",sum);

    return 0;
}