
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : NumberLines
//  Input : Integer
//  Output : void
//  Description :  Accept a number from user and print from its negative to positive.
//  Date : 24/07/2021
//  Author : Hrutik Takke
//
/////////////////////////////////////////////////////////////////////////////////////// 

// 4
// -4  -3  -2  -1   0   1   2   3   4

#include<stdio.h>
/*
void NumberLine(int iNo)
{
    int temp = 0;
    temp = iNo; 
    if(iNo > 0)
    {
        iNo = - iNo;
    }
    // Using For Loop
    for(   ; iNo <= temp; iNo++ )
    {
        printf(" %d ",iNo );
    }

    // Using While Loop
    while(iNo <= temp)
    {
        printf(" %d ",iNo );
        iNo ++;
    }    
}
*/
void NumberLine(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("\n");
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}


int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    
    NumberLine(iValue1);
    return 0;
}