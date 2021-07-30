
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountOne
//  Input : Integer
//  Output : Integer
//  Description : Accept number from user and return count of ON bits i.e(1). Same program ahe fakt ( if ) use karay ch nay.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept number from user and return count of ON bits i.e(1). Same program ahe fakt ( if ) use karay ch nay.
//    (Fancy coding kele ahe. Hye kadhi ch use karu naka.)
#include<stdio.h>

int CountOne(unsigned int iNo)
{
    int iCnt = 0;
    while(iNo)
    {
        iCnt += (iNo % 2);  // iCnt = iCnt + (iNo %2)
        iNo = iNo / 2;
    }
    
    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountOne(iValue);
    
    printf("Number of on bits are : %d\n",iRet);
    return 0;
}






















