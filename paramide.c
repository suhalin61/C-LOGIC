#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the value");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n+1; j++)
        {
           if (j>=(n-1)-i && j<=i+(n-1)+i){
            printf("*");
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
        
    }
}