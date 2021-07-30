
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OffBit
//  Input : Integer
//  Output : Integers
//  Description : Accept a number from user and off 3rd and 7th bit of that number.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept a number from user and off 3rd and 7th bit of that number.
// Input : 100
// Output : 32
// Input : 69
// output : 1

#include<stdio.h>
//      1111        1111        1111        1111        1111        1111        1011        1011
//       F           F            F           F           F           F           B           B

unsigned int OffBit(unsigned int iNo)   // 69       // 0000   0000   0000   0000   0000   0000   0100   0101
{
    unsigned int iMask = 0XFFFFFFBB;
    unsigned int Result = 0;
    
    Result = iNo & iMask;
    
    return Result;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = OffBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}