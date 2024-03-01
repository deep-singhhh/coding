#include<stdio.h>
int main(){
   /* int arr[2][2];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;
    // 1   2
    // 3   4          */

    // another methof of initialization

    int arr[3][3]={{1,2,4},{3,4,5},{4,5,6}};


    // printing 2d arrays ...... printed through loops
    // i  .... row
    // j  ..... column
    for(int i =0;i<3;i++){      // 2....row
        for(int j=0;j<3;j++){   // 2....column
            printf("%d ",arr[i][j]);                

        }
        printf("\n");
    }


    


    






    return 0;
}