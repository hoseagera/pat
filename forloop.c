#include <stdio.h>
int main()
{
int a;
for(a=1; a <= 50; a = a+1)
{
    if(a%2==0)
    {
    printf("\n %d -  even",a);
}
else
{
    printf("\n %d -  odd ",a);
}
}
return 0;
}