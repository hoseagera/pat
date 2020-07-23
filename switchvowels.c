#include <stdio.h>
int main()
{
    char x;
    printf("\n Enter the letter - ");
    scanf("%c", &x);
switch(x)
{
    case 'a':printf("\n It is a vowel");
    break;
    case 'e':printf("\n It is a vowel");
     break;
    case 'i':printf("\n It is a vowel");
     break;
    case 'o':printf("\n It is a vowel");
     break;
    case 'u':printf("\n It is a vowel");
     break;

     default : printf("\n It is a consonant");
     break;
}

return 0;
}