//1. Write a program to print Hello Students on the screen.
/*#include<stdio.h>
int main()
{
	printf("Hello Students");
}*/
//2. Write a program to print Hello in the first line and Students in the second line.
/*#include<stdio.h>
int main()
{
	printf("Hello\nStudents");
}*/
//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
/*#include<stdio.h>
int main()
{
	printf("\"MySirG\"");
}*/
//4. WAP to find the area of the circle. 
//Take radius of circle from user as input and print the result in below given format.
//Expected output format – “Area of circle is A having the radius R”. 
//Replace A with area & R with radius.
/*#include<stdio.h>
int main()
{
	int r;
	float a;
	printf("Enter radius: ");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("Area of circle is %.2f having the radius %d",a,r);
}*/
//5. WAP to calculate the length of String using printf function.
/*#include<stdio.h>
int main()
{
	int x;
	x=printf("SURAJ KUMAR KUSHAVAHA");
	printf(" %d",x);
}*/
/*6. WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”*/
/*#include<stdio.h>
int main()
{	
	char a[20];
	printf("Enter your first name: ");
	scanf("%s",a);
	printf("Hello, %s ",a);
}*/
//7. WAP to print “%d” on the screen.
/*#include<stdio.h>
int main()
{
	printf("%%d");
}*/
//8. WAP to print “\n” on the screen.
/*#include<stdio.h>
int main()
{
	printf("\\n");
}*/
//9. WAP to print “\\” on the screen.
/*#include<stdio.h>
int main()
{
	printf("\\\\");
	return 0;
}*/
/*10. WAP to take date as an input in below given format and convert the date format and display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/
/*#include<stdio.h>
int main()
{
	int dd,mm,yyyy;
	printf("Enter date format (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&dd,&mm,&yyyy);
	printf("Day-%d, Month-%d, Year-%d",dd,mm,yyyy);
	return 0;
}*/
/*11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”*/
/*#include<stdio.h>
int main()
{
	int hh,mm;
	printf("Enter time in format (hh:mm): ");
	scanf("%d:%d",&hh,&mm);
	printf("%d Hour and %d Minute",hh,mm);
	return 0;
}*/
//12. Find output of below code:
#include<stdio.h>
int main()
{
	int x=printf("ineuron");
	printf(" %d",x);
	return 0;
}

