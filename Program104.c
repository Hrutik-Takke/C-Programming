
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountOne
//  Input : Integer
//  Output : Integer
//  Description : Accept number from user and return count of ON bits i.e(1).
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept number from user and return count of ON bits i.e(1).

#include<stdio.h>
int CountOne(unsigned int iNo)
{
    unsigned int iDigit = 0;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCnt++;
        }
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






















