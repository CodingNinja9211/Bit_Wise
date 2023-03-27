#include <stdio.h>
#include <stdlib.h>
int Number_Is_Power_of_2(int data);
int main()
{
    int data;
    printf("enter the number");
    scanf("%d",&data);

    if(Number_Is_Power_of_2(data))
    {
        printf("yes %d is power of 2\n",data);
    }else{ printf("no"); }
    return 0;
}
int Number_Is_Power_of_2(int data)
{
    int loop = 0, count = 0;
    for(loop = 0; loop < 32; loop++)
    {
        if((data>>loop&1) == 1)
        {
            count++;
        }else{}
    }
    if(count == 1)
        return 1;
    else
        return 0;
}
