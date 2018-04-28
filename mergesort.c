#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
long *data,i,j,n,temp;
printf("given n");
scanf("%d",&n);
data=(long *)malloc(n*sizeof(long));

printf("read %d numbers",n);
/*for(i=0;i<n;i++)
scanf("%d",data+i);

for(i=0;i<n;i++)
printf("elements are %d",*(data+i));*/

arrayfill(data,n);

mergesort(data,0,n-1);

printf("sorted numbers are");
for(i=0;i<n;i++)
printf("%d\t",data[i]);
return 0;
}

mergesort(a,i,j)
long *a,i,j;
{
int k,mid;
printf("entered with i=%d and j=%d",i,j);
if(i>=j)return;
mid=(i+j)/2;
mergesort(a,i,mid);
mergesort(a,mid+1,j);
merge(a,i,j);
}

merge(a,i,j)
long *a,i,j;
{
long k,*b,mid,l,start;
b=(long *)malloc(100000*sizeof(long));
start=i;
mid=(i+j)/2;
k=mid+1;
l=i;
while(i<=mid&&k<=j)
{
if(a[i]<=a[k])
{

b[l++]=a[i++];
}
else{

b[l++]=a[k++];
}
}
if(i>mid){

for(;k<=j;)
b[l++]=a[k++];
}
else{

if(k>j)
for(;i<=mid;)
b[l++]=a[i++];
}

for(l=start;l<=j;l++)
a[l]=b[l];
}



arrayfill(d,n)
long *d,n;

{
long x0,xm,xn,a,b,m,i;
//d=(long *)malloc(sizeof(long)*100000);
if(d==NULL)
printf("mem was  not allocated");
m=pow(2,17);
a=9;
b=11;
x0=5;
xn=((a*x0)+b)%m;
xm=xn;
d[0]=xn;
printf("%ld\t",xn);

for(i=1;i<n;i++)
{
xn=((a*xm)+b)%m;
printf("loop %ld is %ld\t",i,xn);

d[i]=xn;
xm=xn;
}
for(i=0;i<n;i++)
printf("array is %ld",d[i]);


}
