
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : pattern
//  Input : Integer, Integer
//  Output : void
//  Description :  Accept two numbers as( Rows and Column) from user and display the below pattern.
//  Date : 26/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

/*
    Row = 4
    Column = 4
 
            *       *       *       *
            *       *       *
            *       *
            *
            41      42      43      44
 
            31      32      33      34
 
            21      22      23      24
            
            11      12      13      14
 */
#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {return;}
    for(i = iRow; i>=1 ; i--)
    {
        for(j = 1; j<= i; j++)
        {
            printf("*\t");        // if pen kadle hyani complexity kami nahi jali, pen iteration kami jale.
        }
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%u",&iValue1);
    printf("Enter number of columns\n");
    scanf("%u",&iValue2);
    
    Pattern(iValue1,iValue2);
    return 0;
}



























