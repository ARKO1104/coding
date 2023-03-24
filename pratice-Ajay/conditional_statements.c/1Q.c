#include<stdio.h>
int main()
{
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    if (0<n)
    { 
        printf("%d",n);
        printf("is positive number");
    }
    else
    {
         printf("%d",n);
        printf(" is negative number");
    }
    return 0;
}