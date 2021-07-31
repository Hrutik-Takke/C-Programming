
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckBit
//  Input : Integer, Integer
//  Output : Boolean
//  Description : Accept a number from user and position and check wheather the bit is ON or OFF at that position.
//  Date : 31/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept a number from user and position and check wheather the bit is ON or OFF at that position.
//    position should be between 1 to 32.(because there are only 32 bits in integer.)

// ( Dynamic Mask creation ) pahilya che sagle programs static mask craetion hote.
#include<stdio.h>
#include<stdbool.h>
/*
                   iNo        0   1   0   1   0   1   1   0
                   iMask      0   1   0   1   0   1   0   0      &
                             ______________________________
                   iResult    0   1   0   1   0   1   0   0
*//*        
bool CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {  return false;  }
    iMask = iMask << (iPos -1);
    
    iResult = iNo & iMask;
    if(iResult == iMask)
    {   return true;    }
    else
    {   return false;   }
}
int main()
{
    unsigned int iValue = 0,iPos = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);
    bRet = CheckBit(iValue,iPos);
    if(bRet == true)
    {   printf("Bit is on\n");}
    else
    {   printf("Bit is off\n"); }
    return 0;
}
*/



// Q. Accept a number from user and 2 positions and check wheather the bit is ON or OFF at that positions.
/*
bool CheckBit(unsigned int iValue, unsigned int iPos1,unsigned int iPos2)
{
    unsigned int iResult = 0,iResult2 = 0,iMask = 0X00000001,iMask2 = 0X00000001;

    iMask = iMask << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iResult = iMask & iValue;
    iResult2 = iMask2 & iValue;
    if((iResult == iMask) && (iResult2 == iMask2))
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
    unsigned int iValue = 0,iPos1 = 0,iPos2 = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d%d",&iPos1,&iPos2);
    bRet = CheckBit(iValue,iPos1,iPos2);
    if(bRet == true)
    {   printf("Both bit is on\n");}
    else
    {   printf("Bit is off\n"); }
    return 0;
}
*/