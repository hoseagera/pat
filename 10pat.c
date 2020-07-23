#include <stdio.h>
int main()
{
int a;
int b;
for(a = 10;a <= 50;a = a +10)
{
    for(b = 10;b <= a;b = b + 10)
    {
        printf("%d ",a);
    }
    printf("\n");
}
return 0;
}