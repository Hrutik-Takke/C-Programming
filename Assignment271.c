
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : offBit
//  Input : int 
//  Output : int
//  Description : Write a program which checks whether 15th bit is On or OFF.
//  Date : 15/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
#include<stdio.h>
/*
1.Write a program which checks whether 15th bit is On or OFF.
Solution :
*/

 typedef int BOOL;
 typedef unsigned int UINT;

 #define TRUE 1
 #define FALSE 0
  
unsigned int offBit(unsigned int iNo)
{
    unsigned int iMask = 0XFFFFBFFF;
    unsigned int iDigit = 0;
    iDigit = iMask & iNo;
    
    if(iNo == iDigit)
    {   return 1;   }
    else
    {   return 0;   }
}
int main()
{
    UINT iDigit = FALSE,iRet = FALSE;

    printf("Enter a number ");
    scanf("%u",&iDigit);
    iRet = offBit(iDigit);
    if(iRet == 1)
    {
    	printf("15th Bit is off\n");
    }
    else
    {
    	printf("15th Bit is on\n");
    }
    return 0;
}