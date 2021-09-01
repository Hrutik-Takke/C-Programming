 /////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : CountTwo
//  Input: Integer
//  Output: Integer
//  Description : Write a program which accept number from user and count frequency of 2 in it.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////
 
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3


#include<stdio.h>
#include<stdlib.h>
int CountTwo(int iNo)
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
  	if(Rem == 2)
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
 int bRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);

 bRet = CountTwo(iValue);
 printf("%d",bRet);
 return 0;
}