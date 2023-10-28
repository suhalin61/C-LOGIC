#include<stdio.h>
int main()
{
    int n,sum=0,reminder,temp;
    printf("find palindrome value");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
         reminder=n%10;
         sum=sum*10+reminder;
            n=n/10;
    }
        if(temp==sum)
        {
            printf("value is palindrome");
        }
        else{
           printf("values is not palindrome");
        
       
    }
}