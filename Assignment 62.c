/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : ChkZero
//  Input: Integer
//  Output: BOOL
//  Description : Write a program which accept number from user and check whether it contains 0 in it or not.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////



Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero


#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
   int Rem = 0;
   if( iNo == 0 )  // check kar
   {
   	 printf("Invalid Input");
   	 exit(0);
   }

   while(iNo != 0)
   {
   	  Rem = iNo % 10;
   	  if(Rem == 0)
   	  {
   	  	return TRUE;
   	  }
   	  iNo = iNo / 10;
   }   
}
int main()
{
 int iValue = 0;
 BOOL bRet = FALSE;
 printf("Enter number");
 scanf("%d",&iValue);
 bRet = ChkZero(iValue);
 
 if(bRet == TRUE)
 {
   printf("It Contains Zero");
 }
 else
 {
   printf("There is no Zero");
 }
 return 0;
}