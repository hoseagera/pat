#include <stdio.h>
int main()
{
int a;
int b;
printf("\n Enter value for a - ");
scanf("%d",&a);
printf("\n Enter value for b - ");
scanf("%d",&b);
int sum = a+b;
printf("\n Sum of %d and %d is %d,",a,b,sum);
int diff = a-b;
printf("\n\n diffrence of %d and %d is %d,",a,b,diff);
int multi = a*b;
printf("\n\n multiplication of %d and %d is %d,",a,b,multi);
int divi = a/b;
printf("\n\n division of %d by %d is %d,",a,b,divi);
return 0;
}