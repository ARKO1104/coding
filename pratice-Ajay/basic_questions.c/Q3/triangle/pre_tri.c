#include<stdio.h>
float main()
{
    int A,B,C,perimeter;
    printf("enter value of side_1 : ");
    scanf("%d",&A);
    printf(" enter value of side_2 : ");
    scanf("%d",&B);
    printf("enter value of side_3 : ");
    scanf("%d",&C);
    printf("your perimeter is : ");
    perimeter=A+B+C;
    printf("%d",perimeter);
    return 0;
}