/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : FactDiff
//  Input: Integer
//  Output: Integer
//  Description : Write a program which accept number from user and return difference between summation
//                 of all its factors and non factors.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////

Q5. 
Input : 12
Output : -34 (16 - 50)

Input : 10
Output : -29 (8 - 37)

#include<stdio.h>
#include<stdlib.h>
int FactDiff(int iNo)
{ 
  int i = 1, fact=0,NonFact = 0;	  
  if(iNo <= 0 )
  {
  	printf("Invalid Input ");
  	exit(0);
  }

  while(i < iNo)
  {
  	if(iNo % i == 0)
  	{
  		fact = fact + i;
  		i ++;
  	}
  	else
  	{
  		NonFact = NonFact + i;
  		i ++;
  	}
  }
   return ( fact - NonFact);
}

int main()
{
 int iValue = 0;
 int iRet = 0;
 printf("Enter number ");
 scanf("%d",&iValue);
 iRet = FactDiff(iValue);

 printf("%d",iRet);
 return 0;
}