#include<stdio.h>
int main()
{
    int salry,exp,bonus;
    printf("how much salry you get in our company : ");
    scanf("%d",&salry);
    printf("how many years you have worked with us  : ");
    scanf("%d",&exp);
    if (exp>5)
    {
        bonus=salry*5;
        printf("you are elegible for bonus");
        printf("you will get %d salry this month with bonus ",bonus);
    }
    else
    {
        printf("you are not elegible for bonus");
        printf("you will get %d this month",salry);
    }
    return 0;
}