#include<stdio.h>
#include<stdlib.h>
int palindrome(int n)
{
    int k=0,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
    if(k==0)
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
    int n,i=1,count=0,k,b,a;
    scanf("%d",&n);
    while(n>0)
    {
        if(palindrome(n))
        {
            printf("%d",abs(n-n));
            break;
        }
        else if(palindrome(n+i)&&palindrome(n-i))
        {
            if(abs(n-(n-i))>abs(n-(n+i)))
            {
                printf("%d",abs(n-(n-i)));
                break;
            }
            else
            {
                printf("%d",abs(n-(n+i)));
                break;
            }
        }
        else if(palindrome(n+i))
        {
          printf("%d",abs(n-(n+i)));
                break;  
        }
        else if(palindrome(n-i))
        {
            printf("%d",abs(n-(n-i)));
                break;
        }
        i++;
    }
}