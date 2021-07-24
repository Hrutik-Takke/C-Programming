
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Integer
//  Output : void
//  Description :  Accept a number from user and display that number of starss.
//  Date : 24/07/2021
//  Author : Hrutik Takke
//
/////////////////////////////////////////////////////////////////////////////////////// 
// Input : 5
// Output : *   *   *   *   *
// Input : 9
//Output : *   *   *   *   *   *   *   *   *

#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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
