
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckBit
//  Input : Integer
//  Output : Integer
//  Description : Accept a number from user and check wheather 5th bit of that number is off or on.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
/*
                   iNo       0   0   0   1   0   0   1   0
                   iMask     0   0   0   1   0   0   0   0      &
                            _______________________________
                   iResult   0   0   0   1   0   0   0   0
*/        
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000010;
    unsigned int iResult = 0;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned int iValue = 0;
    bool bRet;    
    printf("Enter number\n");
    scanf("%u",&iValue);    
    bRet = CheckBit(iValue);    
    if(bRet == true)
    {
        printf("5th bit is on\n");
    }
    else
    {
        printf("5th bit is off\n");
    }
    return 0;
}