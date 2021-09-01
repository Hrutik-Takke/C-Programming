/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Count
//  Input: Integer
//  Output: Integer
//  Description : Write a program which accept number from user and count frequency of such a digits which are less than 6.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////

 
Input : 2395
Output : 3

Input : 1018
Output : 3

Input : 9440
Output : 3

Input : 96672
Output : 1


#include<stdio.h>
#include<stdlib.h>
int Count(int iNo)
{
  int Rem = 0, icnt = 0;
  if( iNo <= 0)
  {
  	printf("Invalid Input");
  	exit(0);
  } 
  while( iNo != 0)
  {
  	Rem = iNo % 10;
  	if(Rem < 6)
  	{
  		icnt ++;
  	}
  	iNo = iNo/10;
  }
   return icnt;
}
int main()
{
 int iValue = 0;
 int iRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = Count(iValue);
 printf("%d",iRet);
 return 0;
}
*/