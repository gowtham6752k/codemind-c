#include<stdio.h>
int main()
{
   int n,i;
  scanf("%d",&n);
  int a[n];
  float s=0;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      s=s+a[i];
  }
  float avg=s/i;
  printf("%.2f",avg);
}
