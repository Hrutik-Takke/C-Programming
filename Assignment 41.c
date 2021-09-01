
/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : MultFact
//  Input: Integer
//  Output: Integer
//  Description : Write a program which accept number from user and display its multiplication of factors.
//  Date: 01/09/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////

Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)


#include<stdio.h>
#include<stdlib.h>
int MultFact(int iNo)
{  
   int i = 1, sum=1;
   if(iNo <= 0)
   {
      printf("Invalid Input");
      exit(0);   // successfull terminate.
   }

   while( i < iNo )
   	{
   	  if( iNo % i == 0)
      {
         sum = sum * i;
      }
       i++;
   }
   return sum;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number ");
scanf("%d",&iValue);

iRet = MultFact(iValue);
printf("%d",iRet);
return 0;
}