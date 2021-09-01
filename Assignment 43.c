 /////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : NonFact
//  Input: Integer
//  Output: void
//  Description : Write a program which accept number from user and display all its non factors.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////


Input : 12
Output : 5 7 8 9 10 11
Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
Input : 10
Output : 3 4 6 7 8 9

#include<stdio.h>
#include<stdlib.h>
void NonFact(int iNo)
{
  int i =1;
  if(iNo <= 0)
  {
     printf("Invalid Input");
     exit(0);   // successfull terminate.
  }
   
  while( i< iNo )
  {  
  	if(iNo % i == 0)
  	{
      i ++;
    }
    else
    {
      printf(" %d ",i );
      i ++;
    }
  }
}
int main()
{
  int iValue = 0;
  printf("Enter number");
  scanf("%d",&iValue);
  
  NonFact(iValue);
  return 0;
}