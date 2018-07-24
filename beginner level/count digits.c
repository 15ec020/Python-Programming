#include <stdio.h>
void main()
{
    int a,temp,count=0;
    scanf("%d",&a);
    while(a!=0)
    {
        temp=a%10;
        a/=10;
        count++;
    }
  printf("%d",count);
}
