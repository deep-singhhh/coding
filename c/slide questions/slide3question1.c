#include<stdio.h>
int main(){
    int a , b, c;
    printf(" enter the values a , b , c :\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b==c || b+c==a || c+a==b){
        printf("one of the number is equal to the sum of other two");
    }
    else{
        printf("none of the number is equal two sum of  other two");

    }






    return 0;
}