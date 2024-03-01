/*#include<stdio.h>    //1 2 4 8 16 32
int main(){
    int n;
    printf("enter the no. of terms you want in this gp:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }








    return 0;
}*/

#include <stdio.h>

int main() {
    int n;
    double firstTerm, commonRatio, term;

    // Input the number of terms and the first term and common ratio
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the first term: ");
    scanf("%lf", &firstTerm);
    printf("Enter the common ratio: ");
    scanf("%lf", &commonRatio);

    // Print the GP series
    printf("Geometric Progression (GP) Series:\n");
    term = firstTerm;
    for (int i = 1; i <= n; i++) {
        printf("%lf ", term);
        term *= commonRatio;
    }

    return 0;
}
