#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter a and b : ");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the value of a is:%d\n",a);
    printf("the value of b is:%d\n",b);
    return 0;
}