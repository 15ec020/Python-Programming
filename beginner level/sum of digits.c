#include <stdio.h>
void main()
{
   int a,sum=0,temp;
   scanf("%d",&a);
   while(a!=0)
   {
       temp=a%10;
       sum=sum+temp;
       a/=10;
       }
   printf("the sum of the digits is: %d ",sum);
}
