/* find the number of set bit */
#include <stdio.h>
#include <stdlib.h>

int Find_Set_Bit(int data);
int main()
{
    int data;
    scanf("%d",&data);
    printf("\n no of count bit is %d",Find_Set_Bit(data));
}
int Find_Set_Bit(int data)
{
    int count = 0, loop = 0;
    for(loop = 31; loop >= 0; loop--)
    {
        printf("%d ",(data>>loop)&1);
        if(((data>>loop)&1) != 0)
           {
               count++;
           }
    }
    return count;
}
