#include<stdio.h>
void swap(int a, int b){
int temp = a;
a = b;
b = temp;
return;
}
int main(){
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    int b;
    printf("enter the value of b");
    scanf("%d",b);
    swap(a,b);
    printf("the value of a in %d\n",a);
    printf("the value of b is %d",b);
    return 0;
}