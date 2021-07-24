
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Integer
//  Output : void
//  Description :  Accept a number from user and display that number of alphabets.
//  Date : 24/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : A   B   C   D   E
// Input : 3
//Output : A    B   C

#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}

 /*  ///// /// My Code //////////
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for( iCnt = 1; iCnt <= iNo ; iCnt ++)
    {
        printf("%c ",ch);
        ch ++;
    }
}*/


int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

