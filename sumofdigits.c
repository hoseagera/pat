#include <stdio.h>
int main()
{
    int sum = 0;
    int a;
    int d;
    printf("\n Enter a value - ");
    scanf("%d",&a);
    while(a>0)
    {
    d = a%10;
    sum = sum +d;
    a = a /10;
    }
    printf("\n sum of the digits = %d ",sum);
    return 0;
}