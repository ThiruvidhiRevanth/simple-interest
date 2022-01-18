#include<stdio.h>

int main()
{
  int a,b,c,d,e,f,p,r,re,re1,re2,re3,t,i4;
float i1,i2,i3;
printf("enter the given date:");
scanf("%d",&a);
printf("enter the given month:");
scanf("%d",&b);
printf("enter  the given year:");
scanf("%d",&c);
printf("enter  the present date:");
scanf("%d",&d);
printf("enter the present month:");
scanf("%d",&e);
printf("enter the present year:");
scanf("%d",&f);
printf("enter the principle");
scanf("%d",&p);
printf("enter the rate");
scanf("%d",&r);
re=d-a;
while(re<0)
{
  re=re+30;
 
e=e-1;
printf("result of date:%d\n",re);
}
re1=e-b;
while(re1<0)
{
re1=re1+12;
f=f-1;
}
printf("result of month: %d\n",re1);
re2=f-c;
printf("result of year:%d\n",re2);
if(0<re2)
{
re2=re2*12;
 }   
re3=re1+re2;
i1=(p*re3*r)/100;
i2=i1/re3;
i3=i2/30;
i4=i3*re+i1;
printf("interest:%d",i4);
t=i4+p;
printf("total amount :%d",t);


return 0;
}