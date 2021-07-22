

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : EvenDigits
//  Input : Integer
//  Output : Integer
//  Description : Accept a number from user and return the No. of Even digits.
//  Date : 22/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////
 // program22 without iDigit variable use karta kelay.
 
#include<stdio.h>
int EvenDigits(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {  iNo = -iNo;  }
    while(iNo > 0)
    {
        if(((iNo %10) % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = EvenDigits(iValue);
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;
}