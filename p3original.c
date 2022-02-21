#include<stdio.h>

int input_num()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  return a;
}

int is_prime(int n)
{
  int i=1,count=0;
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        count+=1;
      }
    }
  return count;
}

void output(int n, int is_prime)
{
  if (is_prime==2)
  {
    printf("%d is a prime number",n);
  }
  else
  {
    printf("%d is not a prime number",n);
  }
}

int main()
{
  int num,result;
  num=input_num();
  result=is_prime(num);
  output(num,result);
}