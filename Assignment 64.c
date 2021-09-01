/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : MultDigits
//  Input: Integer
//  Output: Integer
//  Description : Write a program which accept number from user and return multiplication of all digits.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////


Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864


#include<stdio.h>
#include<stdlib.h>
int MultDigits(int iNo)
{ 
  int Rem = 0, mult= 1;
  if( iNo == 0)          
  {
  	printf("Invalid Input");
  	exit(0);
  } 
  if( iNo < 0)
  {
    iNo = -iNo;
  }
  while( iNo != 0)
  {
  	Rem = iNo % 10;
  	if(Rem == 0)
  	{
     iNo = iNo/10;  
  	}
  	else
  	{
  	  mult = mult * Rem;
      iNo = iNo/10;
    }
  }
   return mult;
}
int main()
{int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = MultDigits(iValue);

printf("%d",iRet);
return 0;
}