
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Integer
//  Output : void
//  Description :  Accept a number from user and display till that number with Stars.
//  Date : 24/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

 // Input : 5
// Output : 1   *   2   *   3   *   4   *   5   *
// Input : 3
//Output : 1   *   2   *   3   *

#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}
 
int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

