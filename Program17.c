
////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactorsSum
//  Input : Integer
//  Output : Boolean(True/ False)
//  Description : Accept number from user and check whether it is perfect or not. Eg 6,28.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////

// Accept number from user and check whether it is perfect or not. Eg 6,28.
// Input : 6
// Output : True        ( 6)   1 +  2 +  3

// Input :  12
// output : False       (16)  1+ 2 + 3 + 4 + 6

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {  iNo = -iNo;  }
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
///////// My Code ////////////
bool CheckPerfect(int iNo)
{ 
  int i =0,sum = 0;
  if( iNo == 0)
  {
    printf("Invalid Input");
    exit(0);
  }  
  for(i =1 ;i <= iNo/2; i++)
  {
    if(iNo % i == 0)
    {
     sum = sum + i;
    }
  }
   if( iNo == sum)
   {  
     return true;
   }
   else
   { 
     return false;
   }
}
*/
int main()
{
    int iValue = 0;
    bool bRet;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}
