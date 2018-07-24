#include <stdio.h>
void main()
{
   int a,temp,rev=0;
   scanf("%d",&a);
   while(a!=0)
   {
       temp=a%10;
       rev=(rev*10)+temp;
       a/=10;
       }
printf("%d",rev);
}
