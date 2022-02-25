#include <stdio.h>
#include <math.h>

int input_array_size()
{
  int a;
  printf("Enter the number of terms: ");
  scanf("%d",&a);
  return a;
}

void input_array(int n,int a[n])
{
  int i=0;
  for(i=0;i<n;i++)
    {
      a[i]=i;
    }
}

void erotosthenes_sieve(int n,int a[n])
{
  a[1]=0;
  int i=0;
  while(i< sqrt(n))
    {
      while(a[i]==0)i++;
      for(int k=i+i;i<n;k+=i)
        a[k]=0;
      i++;
}

void out_put(int n,int a[n])
{
  int i=2; 
  while(a[i]!=0)
    {
      printf("%d,",a[i]);
      i++;
    }
}

int main()
{
  int n;
  n=input_array_size();
  int a[n],b[n];
  input_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  
}