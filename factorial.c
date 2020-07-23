#include <stdio.h>
int main()
{
    int a;
    int fact = 1;
    printf("\n Enter a number - ");
    scanf("%d",&a);
    int i;
    for(i=a;i>=1;i=i-1)
    {
        fact = fact * i;
    }
    printf("\n Factorial = %d ",fact);
    return 0;
}