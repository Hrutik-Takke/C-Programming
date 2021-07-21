
////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactorsSum
//  Input : Integer
//  Output : Integer
//  Description : Accept number and return the addition of its factors.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////

// Accept number and return the addition of its factors
// Input : 6
// Output : ( 6)   1 +  2 +  3

// Input :  12
// output : (16)  1+ 2 + 3 + 4 + 6

# include<stdio.h>
int FactorsSum(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

/*
/////  // My Code ////////////
#include<stdio.h>
#include<stdlib.h>
int FactorsSum(int iNo)
{  
    int sum = 0,Fact = 1;
    if(iNo == 0)
    {
        printf(" Invalid Input");
        exit(0);
    }
    while(Fact <= iNo/2)
    {
       if(iNo % Fact == 0)
       {
         sum =sum + Fact;
       }
        Fact++;
    }
    return sum;
}
*/

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = FactorsSum(iValue);
    printf("Summation is : %d\n",iRet);
    return 0;
}