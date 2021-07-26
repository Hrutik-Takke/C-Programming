
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

/* //////////// Method 1 ///////////////

void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    for( i = 1; i <= iRow; i++)
     { 
        for( j = 1; j <= iCol; j++)
        {
           if( i <= j )
           {
             printf("*  ");
           }
        }
        printf("\n");
     }
}*/

/* //////////// Method 2 ////////////////

void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    for( i = iRow; i >= 1; i--)
     { 
        for( j = 1; j <= iCol; j++)
        {
           if( i >= j )
           {
             printf("*  ");
           }
        }
        printf("\n");
     }
}*/
/*
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {return;}
    for(i = iRow; i>=1 ; i--)
    {
        for(j = 1; j<= iCol; j++)
        {
            if(i >= j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}*/

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




  /*
    
   *  *  *  * 
      *  *  *
         *  *
            *

  void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    for( i = 1; i <= iRow; i++)
     { 
        for( j = 1; j <= iCol; j++)
        {
           if( i <= j )
           {
             printf("*  ");
           }
           else
           {
             printf("   ");
           }
        }
        printf("\n");
     }
}
*/