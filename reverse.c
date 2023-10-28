#include<stdio.h>
int main()
{
    int n,reminder;
    printf("enter the integer number");
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        printf("%d",reminder);
        n=n/10;
    }
}