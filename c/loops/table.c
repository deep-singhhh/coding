#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of which you want to print table");
    scanf("%d",&n);
    for(int i=n;i<=10*n;i=i+n){
    printf("%d\n", i);
    }
    








    return 0;
}
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number for which you want to print the table: ");
    scanf("%d", &n);

    for (int i = n; i <= 10*n; i = i + n) {
        printf("%d\n", i);
    }

    return 0;
}
*/