/* toggle the bit */
#include <stdio.h>
#include <stdlib.h>
int Toggle_Bit(int data);
int main()
{
    int data;
    scanf("%d",&data);
    printf("after toggling %d",Toggle_Bit(data));
}
int Toggle_Bit(int data)
{
    int loop = 0, New_Data = data;
    printf("New_Data = %d\n",New_Data);
    for(loop = 31; loop >= 0; loop--)
    {
        printf("%d ",data>>loop&1);
    }
    printf("\n");
    data = data^0xFFFFFFFF;
    for(loop = 31; loop >= 0; loop--)
    {
        printf("%d ",data>>loop&1);
    }
    return data;
}
