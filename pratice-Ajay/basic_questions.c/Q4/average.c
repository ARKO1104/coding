#include<stdio.h>
int main()
{
    float q,w,e,r,avrage;
    printf("enter the 1st value : ");
    scanf("%f",&q);
    printf(" enter the 2nd value : ");
    scanf("%f",&w);
    printf(" enter the 3rd value : ");
    scanf("%f",&e);
    printf(" enter the 4th vale : ");
    scanf("%f",&r);
    printf("your avrage is ==> ");
    avrage=(q+w+e+r)/4;
    printf("%f",avrage);
    return 0;
}