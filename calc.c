#include<stdio.h>
int main()
{
int c;
float a,b,r;
printf("\n\n\n1.ADD\n2.SUBSTRACT\n3.MULTIPLY\n4.DIVIDE\n\nCHOOSE THE OPERATION: ");
scanf("%d",&c);

if(c==1)
{
 printf("\n Enter two number: ");
 scanf("%f %f",&a,&b);
 r=a+b;
 printf("\n\n%5.2f + %5.2f = %5.2f\n",a,b,r);
}
else if(c==2)
{
 printf("\n Enter two number: ");
 scanf("%f %f",&a,&b);
 r=a-b;
 printf("\n\n%5.2f - %5.2f = %5.2f\n",a,b,r);
}
else if(c==3)
{
 printf("\n Enter two number: ");
 scanf("%f %f",&a,&b);
 r=a*b;
 printf("\n\n%5.2f x %5.2f = %5.2f\n",a,b,r);
}
else if(c==4)
{
 printf("\n Enter two number: ");
 scanf("%f %f",&a,&b);
 if(b==0)
 {
  printf("\n\nDenomenater cannot be 0");
  printf("\nEnter another number as denomenater: ");
  scanf("%f",&b);
 }
 r=a/b;
 printf("\n\n%5.2f / %5.2f = %5.2f\n",a,b,r);
 
}
 else
   printf("\nInvalid Input\n");

return 0;
}
