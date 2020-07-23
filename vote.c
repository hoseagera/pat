#include <stdio.h>
int main()
{
int a;
char b;
printf("Enter your age - ");
scanf("%d",&a);
printf("Are you a citizen of India (y/n) - ");
scanf(" %c",&b);
if(a >=18 && b =='y')
{
    printf("You are eligible to vote ");
}
else
{
    printf("you are not eligible to vote");
}
return 0;
}