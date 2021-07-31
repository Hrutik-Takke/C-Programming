
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountBit
//  Input : Integer
//  Output : Integer
//  Description : Accept a number from user and check total number of ON bits.
//  Date : 31/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000001, iResult = 0;       //  1     0     1     0     0     1     0     1
    int iCnt = 0, i = 0;
    for(i = 0; i < 32; i++)                      // Time complexity is (N) were N is 32. 
    {
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}   
int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountBit(iValue);
    printf("Total ON bits are : %d\n",iRet);
    return 0;
}
/*--------- Method 2 ------------
int CntBit(unsigned int iNo)
{
    int iCnt = 0, iDigit = 0, i = 0;
    unsigned int iResult = 0, iMask = 0X00000001;
    for(i = 1; i < 33; i++)
     {
        iResult = iMask & iNo;
        if(iResult > 0)
        {
            iCnt++;          
        }
        iMask = iMask << 1;
     }
     return iCnt;
}
int main()
{
    unsigned int iValue = 0,iPos = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue); 
    iRet =  CntBit(iValue);
    
    printf("Total ON bits are %d\n",iRet);
    return 0;
}
*/