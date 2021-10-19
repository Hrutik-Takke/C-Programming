////////////////////////////////////////////////
//
//  Output: enter the choice 1
//          enter the radius 10
//          Area of circle is 314.00
//  if you want to continue press 11
//       enter the choice 2
//       enter the base and height 10   30
//       Area of triangle is 150.00
//
//  if you want to continue press 11
//       enter the choice 3
//       enter the lenght and breath 4  5
//       Area of rectangle is 20.00
//
//  if you want to continue press 12
//  Description:USE OF GOTO STATEMENT
//  Date: 19/10/2021
//  Author: Hrutik Takke 
//
///////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{
  float r,b,h,l,br;
  float ca,ta,ra;
  int ch;
  Frist:
  printf("enter the choice");
  scanf("%d",&ch);
  if(ch==1)
  {
    printf("enter the radius\n");
    scanf("%f",&r);
    ca=3.14*r*r;
    printf("Area of circle is %.2f \n",ca);
  }
  else if(ch==2)
  {
    printf("enter the base and height");
    scanf("%f %f",&b,&h);
    ta=0.5*b*h;
    printf("Area of triangle is %.2f \n",ta);
  }
  else if(ch==3)
  {
    printf("enter the lenght and breath");
    scanf("%f %f",&l,&br);
    ra=l*br;
    printf("Area of rectangle is %.2f\n",ra);
  }
  else
  {
    printf("invalid output");
  }
    printf("if you want to continue press 1");
    scanf("%d",&ch);
  if(ch==1)
  {
    goto Frist;
  }
}