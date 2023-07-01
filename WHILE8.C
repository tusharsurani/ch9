#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1,sum=0,n;
   clrscr();
   printf("enter the value of N=");
   scanf("%d",&n);
   while(a<=n)
   {
      sum=sum+a;
      a++;
    }
    printf("sum=%d",sum);
   getch();
}