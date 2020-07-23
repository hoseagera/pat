#include <stdio.h>
int main()
{
    int a;
    printf("\n Enter a number");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("\n The number you have entered is divisible by 5");
    }
        else
        {
        printf("\nThe number you hav entered is not divisible by 5");
        }
        return 0;
}

