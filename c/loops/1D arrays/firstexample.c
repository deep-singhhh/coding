#include<stdio.h>
int main()
{
 int i;
 int data[10];
 for (i=0; i<10; i++)
 data[i]= i;
 for (i=0; i<10; i++)
 printf("Data[%d] = %d\n", i, data[i]);
 return 0;
}
