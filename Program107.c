
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OffBit
//  Input : Integer
//  Output : Integer
//  Description : Accept a number from user and off 3rd bit of that number.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept a number from user and off 3rd bit of that number.
#include<stdio.h>
unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask = 0xFFFFFFFB;     // 4,29,49,67,291 Hya number cha Decimal to Hexadecimal convert kelay.
                                         // karan yevda motha number store nahi karu shakat. 
    unsigned int Result = 0;             // (0x manje bydefault hexadcimal number mhanun consider hoto)
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

/*

0101 0101,1100 1010,1011 0101,0111 0010.  -> 55C9B572
0010 1010,0101 1011,0010 1010,1010 0111   -> 2A5B2AA7
1011 0110,1101 1111,0111 1111,1011 1101   -> B6DF7FBD

*/