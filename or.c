#include <stdio.h>
int main()
{
char x;
printf("Enter a letter - ");
scanf("%c",&x);
if( x =='a' || x =='e'||x =='i'||x =='o'||x =='u')
{
    printf("The letter you have entered is a vowel");
}
else
{
    printf("The letter you have entered is a consonant");
}
return 0;
}