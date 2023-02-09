#include <stdio.h>
#include <math.h>

int main() {
  float p, r, t, ci;
  
  printf("Enter the principle amount: ");
  scanf("%f", &p);
  
  printf("Enter the rate of interest: ");
  scanf("%f", &r);
  
  printf("Enter the time period in years: ");
  scanf("%f", &t);
  
  ci = p*(pow( ( 1+r/100),t ) );

  
  printf("\nCompound Amount:   %f\n", ci);
  printf("Compound Interest: %f\n\n", ci-p);
return 0;
}