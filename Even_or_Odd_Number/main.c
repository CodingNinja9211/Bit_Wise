#include <stdio.h>
#include <stdlib.h>
int Even_or_Odd(int);
int main()
{
    int data;
    printf("Enter data >0\n");
    scanf("%d",&data);
    if(Even_or_Odd(data))
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}
int Even_or_Odd(int data)
{
    if(data>0)
    {
        if((data>>0&1) != 0)
            return 0;
        else
            return 1;

    }
}
