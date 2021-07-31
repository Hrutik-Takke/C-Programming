
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OnBit
//  Input : Integer, Integer
//  Output : Integer
//  Description : Accept a number from user as well as accept one position and ON the bit of that perticular positon if it is OFF.
//  Date : 31/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept a number from user as well as accept one position and ON the bit of that perticular positon if it is OFF.
// Input 11 (iValue)
// Input 3 (iNo)
// Output 15

#include<stdio.h>
#include<stdbool.h>

unsigned int OnBit(unsigned int iNo, int iPos)
{   
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {   return false;   }

    iMask = iMask << (iPos-1);
    iResult = iNo | iMask;
    return iResult;
}
int main()
{
    unsigned int iValue = 0,iPos = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);
    
    iRet = OnBit(iValue,iPos);
    printf("New number is : %u\n",iRet);
    return 0;
}
























