#include <stdio.h>
int main()
{
    int a,b;
    printf("\n Enter value for a and b");
    scanf("%d %d",&a,&b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("\n Values of a and b after swapping");
    printf("\na=%d,b=%d",a,b);
    return 0;
}

