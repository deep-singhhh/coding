#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int sum = 0;  //   1-2+3-4+5-6+ .  . . n terms
    for int( i=1;i<n;i++){
        if(i%2!=0) sum = sum + 1;
        else sum = sum - 1;
    }
    printf("the sum is %d",sum);
    return 0;
}