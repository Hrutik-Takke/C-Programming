
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Input : Integer
//  Output : Integer
//  Description :  Accept a number from user and return the digit between 3 and 7.
//  Date : 23/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q.Accept a number from user and return the digit between 3 and 7.
// Input : 36258296
// Output : 4

#include<stdio.h>
int Frequency(int iNo)
{
    int iCnt = 0, iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit >= 3) && (iDigit <= 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet = Frequency(iValue1);
    
    printf("Frequency is :%d\n",iRet);
    return 0;
}
