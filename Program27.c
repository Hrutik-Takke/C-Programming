
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Reverse
//  Input : Integer
//  Output : Integer
//  Description : Accept number from user and return its reverse number using for loop.
//  Date : 22/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Accept number from user and return its reverse number
// Input : 7521
// Output : 1257
// Input : 4502
// Output : 2054
// Input : 7500
// Output : 57

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    /*while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }*/
    //   1      2           3
    for(   ;iNo > 0 ; iNo = iNo / 10)
    {
        iDigit = iNo % 10;                // 4
        iRev = (iRev * 10) + iDigit;
    }
    
    return iRev;
}