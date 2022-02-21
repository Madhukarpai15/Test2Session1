#include<stdio.h>
#include<math.h>

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the x coordinate of the 1st point: ");
  scanf("%f",x1);
  printf("Enter the y coordinate of the 1st point: ");
  scanf("%f",y1);
  printf("Enter the x coordinate of the 2nd point: ");
  scanf("%f",x2);
  printf("Enter the y coordinate of the 2nd point: ");
  scanf("%f",y2);
}

void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  float a,b,xdiff,ydiff,ans;
  a=(x2-x1);
  b=(y2-y1);
  xdiff=pow(a,2);
  ydiff=pow(b,2);
  ans=ydiff+xdiff;
  *area=sqrt(ans);
}

void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between the points %f,%f and %f,%f is %f",x1,y1,x2,y2,area);
}

int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
}