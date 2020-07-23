#include <stdio.h>
int main()
{
    int a =1;
    while(a<=50)
    {
        if(a % 2 !=0)
        {
        printf("\n %d",a);
        }
        a = a + 1;
    }
    return 0;
}