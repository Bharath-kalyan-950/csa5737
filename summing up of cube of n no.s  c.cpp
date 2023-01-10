#include<stdio.h>
int main()
{
    int n,i,c,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i*i*i;
        printf("%d+",c);
        sum=sum+c;
    }
    printf("\b=%d",sum);
    return 0;
}
