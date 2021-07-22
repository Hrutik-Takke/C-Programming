
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DigitFrequency
//  Input : Integer, Integer.
//  Output : Integer
//  Description : Accept a number from user and return the frequency of digits.
//  Date : 22/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Input :  75845       5
// Output :     2
// Input : 89562        1
// Output :     0

#include<stdio.h>
#include<stdlib.h>

int DigitFrequency(int iNo, int i)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    { iNo = -iNo; }
    if((i < 0)||(i > 9))
    {
        printf("Invalid digit\n");
        return 0;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == i)       // if((iNo % 10)== i) single line var
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    printf("Enter the digit that you want to search\n");
    scanf("%d",&iValue2);

    iRet = DigitFrequency(iValue1,iValue2);
    printf("Number of given digits are : %d\n",iRet);
    
    return 0;
}