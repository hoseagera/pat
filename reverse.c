#include <stdio.h>
int main()
{
    int rev = 0;
    int a;
    int d;
    printf("\n Enter a value - ");
    scanf("%d",&a);
    while(a>0)
    {
    d = a%10;
    rev = (rev * 10) +d;
    a = a /10;
    }
    printf("\n reverse of the digits = %d ",rev);
    return 0;
}