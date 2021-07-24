

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Integer
//  Output : void
//  Description :  Accept a number from user and display that number in reverse with Star.
//  Date : 24/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : *   5   *   4   *   3   *   2   *   1
// Input : 3
//Output : *    3   *   2   *   1

#include<stdio.h>
/*void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("*\t%d\t",iCnt);
    }
    printf("\n");
}*/

int Pattern(unsigned int iNo)
{
    int iCnt = 0;
    for( iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("*  %d  ",iCnt );
    }
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

