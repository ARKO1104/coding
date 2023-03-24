#include<stdio.h>
int main()
{
    int length,breadth;
    printf(" enter the value of length : ");
    scanf("%d",&length);
    printf("enter the value of breadth : ");
    scanf("%d",&breadth);
    if(length==breadth)
    {
        printf("it is a square");
    }
    else
    {
        printf("it is an retrangle");
    }
    return 0;
 
}