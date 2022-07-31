#include<stdio.h>
int main()
{
char x;
printf("Enter any character:- ");
scanf("%c",&x);
if(x>='a' && x<='z')
printf("Small Letter.");
else if(x>='A'&& x<='Z')
printf("Capital Letter.");
else if(x>='0'&& x<='9')
printf("Character is Number.");
else
printf("Special Symbol.");
return 0;	
}
