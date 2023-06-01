#include<stdio.h>
int main()
{
    int n,i,j=0,f=0,k=0;
    scanf("%d",&n);
    int a[100];
    int t1=0,t2=1;
    a[0]=0;
    a[1]=1;
    int nt=t1+t2;
    for(i=3;i<=n;i++)
    {
        a[i-1]=nt;
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    for(i=0;i<n;i++)
    {
        if(n>a[i]&&n<a[i+1])
        {
            f=a[i];
            j=a[i+1];
            break;
        }
        if(n==a[i])
        {
            k=n;
            break;
        }
    }
    if(k==n)
    printf("%d",n);
    if(n-f<j-n)
    printf("%d",f);
    if(n-f==j-n)
    printf("%d %d",f,j);
    if(n-f>j-n)
    printf("%d",j);
}