#include <stdio.h>
#include <stdlib.h>
int ms(int m,int n)
{
int a=2,r=1;
while((m>=a&&m!=0)&&(n>=a&&n!=0))
{
if(m%a==0)
{
if(n%a==0)
{
r=r*a;
n=n/a;
}
m=m/a;
}
else
a++;
}
return r;
}
int cs(int m,int n)
{
int t;
step1:if(m<n)
t=m;
else
t=n;
step2:if(m%t==0)
goto step3;
else
goto step4;
step3:if(n%t==0)
return t;
else
goto step4;
step4:t--;
goto step2;
}
int euclid(int m,int n)
{
int r;
if(n==0)
return m;
else
{
r=m%n;
m=n;
n=r;
euclid(m,n);
}
}
int main()
{
int ch,m,n,gcd;
printf("Enter two integers:");
scanf("%d%d",&m,&n);
printf("1.Middle School\n2.Consecutive integer search\n3.Euclid's algorithm\n4.Exit\n");
for(;;)
{
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:gcd=ms(m,n);
printf("Gcd of %d and %d is %d\n",m,n,gcd);
break;
case 2:gcd=cs(m,n);
printf("Gcd of %d and %d is %d\n",m,n,gcd);
break;
case 3:gcd=euclid(m,n);
printf("Gcd of %d and %d is %d\n",m,n,gcd);
break;
default: exit(0);
}
}
return 0;
}
