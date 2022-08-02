//1. Write a program to print unit digit of a given number
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("The Unit Digit of a %d is %d",n,n%10);
}*/
//2. Write a program to print a given number without its last digit.
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Number: %d\n",n);
	printf("Number without having last digit:%d",n/10);
}*/
//3. Write a program to swap values of two int variables
/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAPPING: a=%d and b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("AFTER SWAPPING: a=%d and b=%d",a,b);
	return 0;
}*/
//4. Write a program to swap values of two int variables without using a third variable.
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAPPING: a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("AFTER  SWAPPING: a=%d and b=%d",a,b);
	return 0;
}*/
//5. Write a program to input a three-digit number and display the sum of the digits.
/*#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("Enter a three digit no: ");
	scanf("%d",&n);
	a=n%10;
	b=(n/10)%10;
	c=(n/10)/10;
	printf("The Sum of Digit=%d",a+b+c);
	return 0;
}*/
//6. Write a program which takes a character as an input and displays its ASCII code.
/*#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	printf("Small Letter");
	else if(ch>='A'&& ch<='Z')
	printf("Capital Letter");
	else if(ch>='0' && ch<='9')
	printf("Numbers");
	else
	printf("Special Symbol");
}*/
//8. Write a program to check whether the given number is even or odd using a bitwise operator.
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	if(n&1==1)
	printf("odd");
	else
	printf("even");
}*/
//9. Write a program to print size of an int, a float, a char and a double type variable
/*#include<stdio.h>
int main()
{
	printf("%d %d %d %d",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
	return 0;
}*/
/*10. Write a program to make the last digit of a number stored in a variable as zero.
 (Example - if x=2345 then make it x=2340)*/
/*#include<stdio.h>
 int main()
 {
 	int n;
 	printf("Enter a number: ");
 	scanf("%d",&n);
 	printf("Number=%d",n);
 	printf("\nAfter Change=%d",(n/10)*10);
 }*/
 /*11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
  (Example - number=234 and digit=9 then the resulting number is 2349)*/
/*#include<stdio.h>
int main()
{
	int n,d;
	printf("Enter a no: ");
	scanf("%d",&n);
	printf("Enter a digit: ");
	scanf("%d",&d);
	printf("Number=%d\n",n);
	printf("Result=%d\n",(n*10)+d);
}*/
/*12. Assume price of 1 USD is INR 76.23.
 Write a program to take the amount in INR and convert it into USD.*/
/*#include<stdio.h>
int main()
{
	float u,i;
	printf("Enter indian rupees: ");
	scanf("%f",&i);
	u=i/76.23;
	printf("US Dollar=%.2f",u);
}*/
/*13. Write a program to take a three-digit number from the user
 and rotate its digits by one position towards the right.*/
 /*#include<stdio.h>
 int main()
 {
 	int n,p,q;
 	printf("Enter a 3-digit no: ");
 	scanf("%d",&n);
 	p=n/10;
 	q=n%10;
 	printf("Number=%d\n",n);
 	printf("Result: %d",q*100+p);
 }*/
 //7. Write a program to find the position of first 1 in LSB.
 //Next Assignment me subhmit ho jayga sir abhi nhi ban pa rha h
 
