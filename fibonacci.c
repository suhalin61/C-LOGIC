#include<stdio.h>

int main()
    {
        int a=0,b=1,c,n;
        printf("enter the value of value");
        scanf("%d",&n);
        for (int i = 1; i <=n ; i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d\n",a);
        }
        

    }

