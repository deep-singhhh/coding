#include<stdio.h>
int main(){
    int a, b, c, d;
    double prec;
    printf("enter the values :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    prec = a+(double)b/c/d*10*5-b+20*d/c;
    printf("the answer is:%.21f/n",prec);
    return 0;

}