#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1,f=1,n;
   clrscr();
   printf("enter the value of N=");
   scanf("%d",&n);
   while(a<=n)
   {
      f=f*a;
      a++;
    }
    printf("the fectorial of %d is %d",n,f);
   getch();
}