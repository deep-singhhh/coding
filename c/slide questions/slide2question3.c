#include<stdio.h>
#include<math.h>
int main(){
    double x1 ,x2, x3, y1 ,y2, y3;
    double area;
    printf("enter the three coordinates:");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&x2,&x3,&y1,&y2,&y3);
    area = x1*(y2-y3) +x2*(y3-y1) +x3*(y1-y2)/2;
    printf("the area occupied by these three coordinates is :  %f\n",area);
    return 0;
}
