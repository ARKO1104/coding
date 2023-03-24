#include<stdio.h>
int main()
{
    int age;
    printf("enter your number : ");
    scanf("%d",&age);
    if (age>=18)
    { 
        printf("he can drive");
    }
    else
    {
        printf("he cannot drive");
    }
    return 0;
}