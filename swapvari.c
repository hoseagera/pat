#include <stdio.h>
int main()
{
    int a,b;
     printf("\n Enter value for a and b");
    scanf("%d %d",&a,&b);
    a=b+a;
    b=a-b;
    a=a-b;
    printf("\n Values of a and b after swapping");
    printf("\na=%d,b=%d",a,b);
    return 0;
}
