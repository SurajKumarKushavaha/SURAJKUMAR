//1. Write a program to print MySirG N times on the screen
/*#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}*/
//2. Write a program to print the first N natural numbers.
/*#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter an integer no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }

}*/
//3. Write a program to print the first N natural numbers in reverse order
/*#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter an integer no: ");
    scanf("%d",&n);
    while(n>=i)
    {
        printf("%d ",n);
        n--;
    }

}*/
//4. Write a program to print the first N odd natural numbers
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
}*/
//5. Write a program to print the first N odd natural numbers in reverse order.
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a no: ");
    scanf("%d",&n);
    while(n>=i)
    {
        printf("%d ",2*n-1);
        n--;
    }
}*/
//6. Write a program to print the first N even natural numbers
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i);
        i++;
    }

}*/
//7. Write a program to print the first N even natural numbers in reverse order
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a no: ");
    scanf("%d",&n);
    while(n>=i)
    {
        printf("%d ",2*n);
        n--;
    }
}*/
//8. Write a program to print squares of the first N natural numbers
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a natural no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
}*/
//9. Write a program to print cube of the first N natural numbers
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a natural no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
}*/
//10.1 Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }
    return 0;
}
