#include <stdio.h>
int main(){
int num1 , num2;
    printf("\n\nEnter the number: ");
    scanf("%d",&num1);

    printf("Enter the number: ");
    scanf("%d",&num2);

    if (num1>num2){
        printf("%d is greater than %d",num1,num2);
    }
    else if(num1 == num2){
        printf("%d is equal to %d",num1,num2);
    }
    else{
        printf("%d is greater than %d",num2,num1);
    }
    return 0;
}