#include<stdio.h>
int main(){
    int a , b, c;
    double average;
    printf("enter three values of which you want to take avg.  :");
    scanf("%d %d %d",&a,&b,&c);
    average = (a+b+c)/3;
    printf("the avg. of above three values is :%.21f\n",average);
    return 0;
    
}