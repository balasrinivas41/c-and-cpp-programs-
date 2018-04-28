#include<stdio.h>
#include<conio.h>
#include<math.h>
//#define MAX=100000
void main()
{
long x0,xm,xn,a,b,m,i,*d;
d=(long *)malloc(sizeof(long)*100000);
if(d==NULL)
printf("mem was  not allocated");
clrscr();
m=pow(2,17);
a=9;
b=11;
x0=5;
xn=((a*x0)+b)%m;
xm=xn;
d[0]=xn;
printf("%ld\t",xn);

for(i=1;i<100000;i++)
{
xn=((a*xm)+b)%m;
printf("loop %ld is %ld\t",i,xn);

d[i]=xn;
xm=xn;
}
for(i=0;i<100000;i++)
printf("array is %ld",d[i]);


}