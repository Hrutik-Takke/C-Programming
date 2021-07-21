/*
//                        Logic Building Assignment : 13
1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : * # # #
         * * # #
         * * * #
 	 	 * * * *
*//*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  for( i = 1; i <= iRow; i++)
  {
  	for( j = 1; j <= iCol; j++)
  	{
  		if( i >= j)
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
  int iValue1 = 0, iValue2 = 0;
  printf("Enter number of rows and columns ");
  scanf("%d %d",&iValue1, &iValue2);
  
  Pattern(iValue1, iValue2);
  return 0;
}
*/


/*
2. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : * * * *   
         * * * #
         * * # #
 		 * # # #
*//*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
  for( i = iRow; i >= 1; i--)
  {
  	for( j = 1; j <= iRow; j++)
  	{
  		if( i >= j)
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
   int iValue1 = 0, iValue2 = 0;
   printf("Enter number of rows and columns");
   scanf("%d %d",&iValue1,&iValue2);
   
   Pattern(iValue1, iValue2);
   return 0;
}*/

/*
3. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 5 iCol = 5
Output : $ * * * *
         * $ * * *
         * * $ * *
         * * * $ *
         * * * * $
*//*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  for( i = 1; i <= iRow; i++)         // for( i = iRow; i >= 1; i--) You can use this also.
  {
  	for( j = 1; j <= iCol; j++)       // for(j = iCol; j >= 1; j--)
  	{
  		if( i == j)
  		{
  			printf("$\t");
  		}
  		else
  		{
  			printf("*\t");
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
}*/
/*
4. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 5
Output : * * * * *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* * * * *
*//*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  for( i = 1; i <= iRow; i++)
  {
  	for( j = 1; j <= iCol; j++)
  	{
  		if((j == 1) || ( j == iCol) || (i == iRow))
  		{
  			printf("*\t");
  		}
  		else
  		{
  			printf("@\t");
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
}*/

/*
5. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
         1 * * 4
         1 * * 4
         1 2 3 4
*//*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  for( i = 1; i <= iRow; i++)
  {
  	for( j = 1; j <= iCol; j++)
  	{
  		if((i == 1) || ( i == iRow) || (j == 1) || (i == iCol))
  		{
  			printf("%d\t",j);
  		}
  		else
  		{
  			printf("*\t");
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
}*/

/*
6. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :
        * * * *
 	 	# * * *
 	 	# # * *
 	 	# # # *
*/
/*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
  for( i = iRow; i >= 1; i--)
  {
  	for( j = iCol; j >= 1; j--)
  	{
  		if( i >= j)
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
   int iValue1 = 0, iValue2 = 0;
   printf("Enter number of rows and columns");
   scanf("%d %d",&iValue1,&iValue2);
   
   Pattern(iValue1, iValue2);
   return 0;
}*/


/*
7. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : * # # #   
         * * # #
         * * * #
 		 * * * *
*//*
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
  for( i = 1; i <= iRow; i++)
  {
  	for( j = 1; j <= iRow; j++)
  	{
  		if( i >= j)
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
   int iValue1 = 0, iValue2 = 0;
   printf("Enter number of rows and columns");
   scanf("%d %d",&iValue1,&iValue2);
   
   Pattern(iValue1, iValue2);
   return 0;
}*/