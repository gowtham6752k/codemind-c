#include<stdio.h>
int digits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int dividing(int n)
{
    int temp,count=0,k,rev=0;
    k=n;
    while(n>0)
    {
        temp=n%10;
        if(temp>0)
        {
            if(k%temp==0)
            {
                count++;
            }
        }
        n=n/10;
    }
    if(count==digits(k))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        if(dividing(a)==1)
        {
            printf("%d ",a);
        }
    }
}