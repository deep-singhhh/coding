#include<stdio.h>;
int main(){
    double int1,int2;
    char float1,float2;
    printf("enter two double and character ");
    scanf("%lf%lf%c%c",&int1,&int2,&float1,&float2);
    printf("you entered \n");
    printf(" 1st double %lf\n",int1);
    printf("2nd double %lf\n",int2);
    printf("1st character %c\n",float1);
    printf("2nd character %c\n",float2);
    return 0;
}