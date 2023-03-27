#include <stdio.h>
#include <stdlib.h>
void Swap_Num(int *data1, int *data2);
int main()
{
    int data1,data2;
    printf("enter number\n");
    scanf("%d%d",&data1,&data2);
    Swap_Num(&data1,&data2);
    printf("data1 = %d, data2 = %d",data1, data2);
    return 0;
}
void Swap_Num(int *data1, int *data2)
{
    *data1 = *data1 ^ *data2;
    *data2 = *data1 ^ *data2;
    *data1 = *data1 ^ *data2;
    return;
}
