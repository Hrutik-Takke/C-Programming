
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : pattern
//  Input : Integer, Integer
//  Output : void
//  Description :  Accept two numbers as( Rows and Column) from user and display the below pattern.
//  Date : 25/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

/*
    Row = 4
    Column = 4
 
            
            #       *       *       #
 
            *       *       *       *
 
            *       *       *       *
            
            #       *       *       #
 
 
            1,1     1,2     1,3     1,4
 
            2,1     2,2     2,3     2,4
            
            3,1     3,2     3,3     3,4
            
            4,1     4,2     4,3     4,4

 */




#include<stdio.h>
 
void Pattern(unsigned int iRow,unsigned int iCol)
{
    int i = 0,j = 0;
    for( i = 1; i <= iRow; i++)
    {
       for ( j = 1; j <= iCol; j++)
       {
           if(((i == iRow / 2 ) || (i == (iRow/ 2) + 1  ) ||(j == iCol / 2) || (j == (iCol / 2) +1)))
           {
            printf("*\t");
           }
           else
           {
             printf("#\t");
           }
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



























