#include<stdio.h>

int main()
{
   int n,sum=0;
   printf("enter the valueof n");
   scanf("%d",&n);
   for(int i=0; i<=n; i+=5)
   {
       sum = sum +i;
       }
    printf("%d",sum);
    
}
