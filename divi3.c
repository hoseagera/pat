#include <stdio.h>
int main()
{
int a;
printf("\n Enter a number");
scanf("%d",&a);
if(a%3==0)
{
printf("\n The number you have entered is divisible by 3");
}
else
{
printf("\n The number you have entered is not divisible by 3");
}
return 0;
}