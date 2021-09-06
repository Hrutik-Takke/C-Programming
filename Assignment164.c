
///////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input : Integer, Integer
//  Output : Void
//  Description : Accept number of rows and number of columns from user and display below pattern.
//  Date : 06/09/2021
//  Author :  Hritik Takke
//
///////////////////////////////////////////////////////

 
Input : iRow = 6 iCol = 6
Output : 
/*
* * * * * *        61 62 63 64 65 66
* # # # * *        51 52 53 54 55 56
* # # * $ *        41 42 43 44 45 46     
* # * $ $ *        31 32 33 34 35 36    
* * $ $ $ *        21 22 23 24 25 26
* * * * * *        11 12 13 14 15 16 

*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int  i = 0, j = 0;
   for(i = iRow; i >= 1 ; i--)
   {  
     for(j = 1; j <= iCol ; j++)
     {
       if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
       {
         printf("*  ");
       }
       else if( i > j)
       {
         printf("#  ");
       }
       else
       {
         printf("&  ");
       }
     }
      printf("\n");
   }
}
int main()
{
  int iValue1 = 0, iValue2 = 0;
  printf("Enter number of rows and columns");
  scanf("%d %d",&iValue1, &iValue2);
  
  Pattern(iValue1, iValue2);
  return 0;
}