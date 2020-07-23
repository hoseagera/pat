#include <stdio.h>
int main()
{
int a;
for(a=1;a <= 10; a = a+1)
{
if(a == 5)
{
  continue;
}
  {
    printf("\n %d",a);
  }
}
printf("\n I came out of the loop");
return 0;
}