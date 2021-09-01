/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : SumNonFact
//  Input: Integer
//  Output: Integer
//  Description : Write a program which accept number from user and return summation of all its non factors.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////


Input : 12
Output : 50 ( 5 + 7 + 8 + 9 + 10 + 11)

Input : 10  
Output : 37 ( 3 + 4 + 6 + 7 + 8 + 9 )

#include<stdio.h>
#include<stdlib.h>
int SumNonFact(int iNo)
{
  int i = 1,sum = 0;
  if(iNo <= 0)
  {
     printf("Invalid Input");
     exit(0);   // successfull terminate.
  }
   
  while( i < iNo )
  {  
  	if(iNo % i == 0)
  	{
      i ++;
    }
    else
    {
      sum = sum + i;
      i ++;
    }
  }
    return sum;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number ");
scanf("%d",&iValue);

iRet = SumNonFact(iValue);
printf("%d",iRet);
return 0;
}