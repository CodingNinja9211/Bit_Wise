/* number of clear bit */
#include <stdio.h>
#include <stdlib.h>
int Find_Numberof_Clear_Bit(int data);
int main()
{
    int data;
    scanf("%d",&data);
    printf("\nnumber of clear bit is %d",Find_Numberof_Clear_Bit(data));
}
int Find_Numberof_Clear_Bit(int data)
{
    int count = 0, loop = 0;
    for(loop = 31; loop >= 0; loop--)
    {
        printf("%d ",data>>loop&1);
        if((data>>loop&1) != 1)
        {
            count++;
        }
    }
    return count;
}
