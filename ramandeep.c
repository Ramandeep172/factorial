#include<stdio.h>
int main()

{
    int n,i;
    scanf("%d",&n);
    int t=1;
    for(i=2;i<n;i++)
        t=t*i;
    printf("factorial %d",t);
