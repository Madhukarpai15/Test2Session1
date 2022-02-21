#include<stdio.h>
#include<math.h>

void input_line(float *x1,float *y1)
{
  printf("Enter the x coordinate: ");
  scanf("%f",x1);
  printf("Enter the y coordinate: ");
  scanf("%f",y1);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float side1,side2,side3;
  side1=sqrt(pow((x2-x1),2)-pow((y2-y1),2));
  side2=sqrt(pow((x3-x2),2)-pow((y3-y2),2));
  side3=sqrt(pow((x1-x3),2)-pow((y1-y3),2));
  while(side1+side2<side3 || side2+side3<side1 || side1+side3<side2)
    {
      if(x1==x2 || x2==x3 || x3==x1)
      {
        if(y1==y2 || y2==y3 || y3==y1)
        {
          return 1;
        }
        else
        {
          break;
        }
      }
    }
  
}

void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if (istriangle==1)
    {
      printf("The points %f %f, %f %f and %f %f make a triangle",x1,y1,x2,y2,x3,y3);
    }
  else if (istriangle==0)
  {
    printf("The points %f %f, %f %f and %f %f dont make a triangle",x1,y1,x2,y2,x3,y3);
  }
}

int main()
{
  float x1,y1,x2,y2,x3,y3;
  int result;
  input_line(&x1,&y1);
  input_line(&x2,&y2);
  input_line(&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}