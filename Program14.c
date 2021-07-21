
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Factors
//  Input : Integer
//  Output : Void
//  Description : Accept number and display factors of that number.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////

// Q.Accept number and display factors of that number
// Input : 6
// Output : 1   2   3   6

// if (6 % 1) == 0          1
// if (6 % 2) == 0          2
// if (6 % 3) == 0          3               if (iNo % ___) == 0
// if (6 % 4) == 0          --              Start = 1
// if (6 % 5) == 0          --              End = 5
//                                          Displacement 1
/*

////////// My logic //////////
#include<stdio.h>
#include<stdlib.h>
void Factors(int iNo)
{
   int i = 0;
   if(iNo == 0)
   {
     printf("Invalid Input");
     exit(0);
   }
   if(iNo < 0)
   {
     iNo = -iNo;   // Updater
   }
   for( i = 1; i < iNo; i ++)
   {
     if(iNo % i == 0)
     {
        printf("%d ",i);
     }
   }
}
*/
# include<stdio.h>
void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
      iNo = -iNo;  // Update
    }    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           printf("%d\n",iCnt);
        }
    }
}
//  Time Complexity : O(N)  
//  O -> order of N, N -> Input 

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    Factors(iValue);
    
    return 0;
}