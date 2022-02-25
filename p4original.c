#include <stdio.h>

int input()
{
  int a;
  printf("Enter the number of terms: ");
  scanf("%d",&a);
  return a;
}

int find_fibo(int n)
{
  int i=2,sum=0;
  int a[n];
  a[0]=0;
  a[1]=1;
  for(i=2;i<=n;i++)
  {
    a[i]=a[i-1]+a[i-2];
    
    
  }
  return a[n];
}

void output(int n,int fibo)
{
  printf("The %dth term of the fibonacci series is: %d",n,fibo);
}

int main()
{
  int n,result;
  n=input();
  result=find_fibo(n);
  output(n,result);
}