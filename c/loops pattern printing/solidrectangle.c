#include<stdio.h>
int main(){
    int n;
    int m;
    printf("enter the number of lines:");
    scanf("%d",&n);
    printf("enter the number of stars in eaach line: ");
    scanf("%d",&m);
    for(int i=0; i<n;i++){ // outer loop signifies no. of lines
        for(int i=0;i<m;i++){  //inner loop signifies no. of stars in each row
            printf("*");
        }
        printf("\n");  // enter for each line
    }
return 0;
}