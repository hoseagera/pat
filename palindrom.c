#include <stdio.h>
int main()
{
    int a;
    int d;
    int rev = 0;
    
    printf("\n Enter a number - ");
    scanf("%d",&a);

    int para = a;

    while (a>0) 
    {
        d = a%10;
        rev = (rev *10) + d;
        a = a / 10;

    }
    if(para == rev) 
    {
        printf("\n it is a palindrome ");
    } 
    else 
    {
        printf("it is not a palindrome");
    }

    return 0;
}