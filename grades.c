#include <stdio.h>
int main()
{
char grade;
printf("\nEnter your grade ");
scanf("%c",&grade);
if(grade =='A')
{
    printf("\nThe grade you have entered is very good");
}
else if(grade =='a')
{
    printf("\nplease enter in capitals");
}
else if(grade =='B')
{
 printf("\nThe grade you have entered is good");
}
if(grade =='b')
{
    printf("\nThe grade you have entered is very good");
}
else if(grade =='C')
{
    printf("\nThe grade you have entered is okay");
}
if(grade =='c')
{
    printf("\nThe grade you have entered is very good");
}
else if(grade =='D')
{
    printf("\nThe grade you have entered is bad");
}if(grade =='d')
{
    printf("\nThe grade you have entered is very good");
}
else if(grade =='E')
{
    printf("\nThe grade you have entered is fail");
}
if(grade =='e')
{
    printf("\nThe grade you have entered is very good");
}
else 
{
    printf("\n The grade you have entered is INVALID");
}
return 0;
}