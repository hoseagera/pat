#include <stdio.h>
int main()
{
int a;
int b;
for(a = 5;a >= 1;a--)
{
    for(b = 5;b >= a;b--)
    {
        printf("%d ",a);
    }
    printf("\n");
}
return 0;
}