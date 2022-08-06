//1. Write a program to check whether a given number is positive or non-positive.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n>0)
        printf("Positive");
    else
        printf("Non-Positive");
    return 0;
}*/

//2. Write a program to check whether a given number is divisible by 5 or not
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n%5==0)
        printf("%d is divisible by 5",n);
    else
        printf("%d is not divisible by 5",n);
    return 0;
}*/

//3. Write a program to check whether a given number is an even number or an odd number.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even No.");
    else
        printf("Odd No.");
    return 0;
}*/
//4. Write a program to check whether a given number is an even number or an odd number without using % operator.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    if(n&1==1)
        printf("Odd No.");
    else
        printf("Even No.");
    return 0;
}*/

//5. Write a program to check whether a given number is a three-digit number or not.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    if(n>99 && n<1000)
    printf("No. is a three digit no");
    else
    printf("No is not a three digit no.");
    return 0;
}*/
//6. Write a program to print greater between two numbers. Print one number of both are the same.
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is Greater.",a);
    else
        printf("%d is Greater.",b);
    return 0;
}*/
//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
/*#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a,b,c integer value: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Roots are real and distinct.");
    else if(d==0)
        printf("Roots are real and equal.");
    else
        printf("Roots are imaginary.");
    return 0;
}*/
//8. Write a program to check whether a given year is a leap year or not.
/*#include<stdio.h>
int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if(y%400==0)
        printf("Leap Year.");
    else if(y%4==0)
        printf("Leap Year.");
    else
        printf("Not a Leap Year.");
    return 0;
}*/
//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a, b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is Greater.",a);
    else if(b>c)
        printf("%d is Greater.",b);
    else
        printf("%d is Greater.",c);
    return 0;
}*/
//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
/*#include<stdio.h>
int main()
{
    float cp,sp,pp,lp;
    printf("Enter cost price and selling price: ");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
        printf("Profit= %.2f%%",pp=((sp-cp)/cp)*100);
    else
        printf("Loss= %.2f%%",lp=((cp-sp)/cp)*100);
    return 0;
}*/
//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
/*#include<stdio.h>
int main()
{
    float hin,eng,sci,ssc,math;
    printf("Enter marks of 5 subject (Each subject marks not graeter than 100): ");
    scanf("%f%f%f%f%f",&hin,&eng,&sci,&ssc,&math);
    if(hin>=33 && eng>=33 && sci>=33 && ssc>=33 && math>=33)
        printf("Passed the Examination.");
    else
        printf("Failed.");
    return 0;
}*/
//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Small Letter.");
    else
        printf("Capital Letter.");
    return 0;
}*/
//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer no: ");
    scanf("%d",&n);
    ((n%2==0)&&(n%3==0))?printf("Number is Divisible by 2 and 33."):printf("Number is not Divisible by 2 and 3.");
    return 0;
}*/
//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number:  ");
    scanf("%d",&n);
    ((n%7==0)||(n%3==0))?printf("Number is divisible by 7 or 3"):printf("Number is not divisible by 7 or 3");
    return 0;
}*/
//15. Write a program to check whether a given number is positive, negative or zero.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
        printf("Number is Positive.");
    else if(n<0)
        printf("Nuber is Negative.");
    else
        printf("Number is Zero.");
    return 0;
}*/
//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Small Letter.");
    else if(ch>='A' && ch<='Z')
        printf("Capital Letter.");
    else if(ch>='0' && ch<='9')
    printf("Numbers.");
    else
        printf("Special Symbol.");
    return 0;
}*/
//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("Triangle Is Valid.");
    else
        printf("Triangle Is Not Valid.");
    return 0;
}*/
//18. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int m;
    printf("Enter month number: ");
    scanf("%d",&m);
    switch(m)
    {
        case 1: printf("31 Days."); break;
        case 2: printf("28 or 29 Days."); break;
        case 3: printf("31 Days."); break;
        case 4: printf("30 Days."); break;
        case 5: printf("31 Days."); break;
        case 6: printf("30 Days."); break;
        case 7: printf("31 Days."); break;
        case 8: printf("31 Days."); break;
        case 9: printf("30 Days."); break;
        case 10: printf("31 Days."); break;
        case 11: printf("30 Days."); break;
        case 12: printf("31 Days."); break;
        default:
            printf("Invalid Month Number.");
    }
    return 0;
}

