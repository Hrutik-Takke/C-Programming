
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : MaxDigit
//  Input : Integer
//  Output : Integer
//  Description : Accept number from user and return the largest digit.
//  Date : 22/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q.Accept number from user and return the largest digit.
// Input : 7521
// Output : 7

// Input : 121
// Output : 2

// Input : 56892
// Output : 9

#include<stdio.h>
int MaxDigit(int iNo)
{
    int iDigit = 0, iMax = 0;
    if(iNo < 0)
    {  iNo = -iNo;  }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}


int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = MaxDigit(iValue);
        
    printf("Largest digit : %d\n",iRet);
    return 0;
}
