
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ToggleBit
//  Input : Integer
//  Output : Integer
//  Description : Accept a number from user and check wheather 5th bit of that number is off or on.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept a number from user and check wheather 5th bit of that number is off or on.
#include<stdio.h>
//      1111        1111        1111        1111        1111        1111        1011        1011
//       F           F            F          F           F            F           B           B

unsigned int ToggleBit(unsigned int iNo)   // 69
    // 0000    0000    0000     0000     0000    0000    0000    0100
{
    unsigned int iMask = 0X00000004;
    unsigned int Result = 0;
    
    Result = iNo ^ iMask;
    
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = ToggleBit(iValue);
    
    printf("Number after updations : %d\n",iRet);
    return 0;
}