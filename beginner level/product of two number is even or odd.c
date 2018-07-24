#include <stdio.h>
void main()
{
    int m,n,mul;
    scanf("%d",&m);
    scanf("%d",&n);
     mul=m*n;
    if(mul%2==0)
    {
      printf("even");  
    }
    else
    {
        printf("odd");
    }
}
