#include<stdio.h>
#include<math.h>
int main(){
    double P , I , N , A , CI;
    printf("Enter the principle amount:");
    scanf("%lf",&P);
    printf("Enter the rate of interest:");
    scanf("%lf",&I);
    printf("Enter the time span:");
    scanf("%lf",&N);
    A = P * (pow((1 + I/100),N));
    CI = A-P;
    printf("your compound interest is:%.2lf",CI);













    return 0;
}