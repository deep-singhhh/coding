#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}