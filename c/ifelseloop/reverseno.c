#include<stdio.h>
int main(){
    int n;
    printf("enter the digit");
    scanf("%d",&n);
    int r;
    while(n>0){
        r = r*10;
        r = r+(n%10);
        n = n/10;
    }
    printf("the reversed no. is%d",r);

    return 0;
}