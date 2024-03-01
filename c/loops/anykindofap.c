#include<stdio.h>
int main(){
    int a;
    int n;
    int d;
    printf("enter 1st term of ap:");
    scanf("%d",&a);
    printf("enter no. term of ap:");
    scanf("%d",&n);
    printf("enter common differnce of ap:");
    scanf("%d",&d);
    for(int i=a;i<=a+(n-1)*d;i=i+d){
        printf("%d ",i);
    }
    







    return 0;
}