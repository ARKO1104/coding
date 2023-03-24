#include<stdio.h>
int main()
{
    int price,discount,final;
    printf("enter the price of that product : ");
    scanf("%d",&price);
    if(price>10000)
    {
      printf("you get discount on your product and your final price is ");
      discount=price*10/100;
      final=price-discount;
      printf("%d",final);
      printf(" thank you for shoping");
    }
    else
    {
        printf("thank you for shoping");
    }
}