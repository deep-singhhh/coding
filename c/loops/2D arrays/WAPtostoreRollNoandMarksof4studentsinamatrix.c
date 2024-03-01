#include<stdio.h>
int main(){
    int s;
    printf("enter the no. of students:");
    scanf("%d",&s);
    int sub;
    printf("enter the no. of subjects:");
    scanf("%d",&sub);
    int arr[s][sub];
    for(int i=0;i<s;i++){
        for(int j=0;j<sub;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    



    return 0;

}