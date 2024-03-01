#include <stdio.h>
#include<math.h>
int main(){
    double p, r, t ,i;
    printf("enter the principal , rate, time:");
    scanf("%lf%lf%lf",&p,&r,&t);
    i = p*(pow(1+r,t) -1);
    printf("the compound interest is:%f\n",i);
    return 0;

    

}




// wrong code with wrong answer