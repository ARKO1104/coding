#include<stdio.h>
//perimeter = 2*(l+w)
int main()
{
    int x,y,B;
    printf("enter length : ");
    scanf("%d",&x);
    printf(" enter breadth : ");
    scanf("%d",&y);
    printf("your perimeter is : ");
    B=2*(x+y);
    printf("%d",B);
    return 0;

}