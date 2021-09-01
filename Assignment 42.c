
/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : FactRev
//  Input: Integer
//  Output: void
//  Description : Write a program which accept number from user and display its factors in decreasing order.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////

Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1

Input : 10
Output : 5 2 1

#include<stdio.h>
#include<stdlib.h>
void FactRev(int iNo)
{ 
  int i = iNo,sum = 1;
  if(iNo <= 0)
  {
     printf("Invalid Input");
     exit(0);   // successfull terminate.
  }
   
  while( i != 1)
  {  
  	 i--; 
  	if(iNo % i == 0)
  	{
     printf("%d ",i);
    }
  }
}

int main()
{
 int iValue = 0;
 printf("Enter number ");
 scanf("%d",&iValue);

 FactRev(iValue); 
 return 0;
}