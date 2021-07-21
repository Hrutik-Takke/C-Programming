
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckPrime
//  Input : Integer
//  Output : Boolean(True/ False)
//  Description : Accept number from user and check whether it is prime or not.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
//////////////////////////////////////////////////////////////////////////////////////

// Input : 7
// Output : True

// Input :  13
// output : True

// Input : 12
// Output : False

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
//////////// My Code ////////////////
bool CheckPrime(int iNo)
{
   int iCnt = 0 ,sum = 0; 
   if(iNo == 0)
   {
     printf("Invalid Input");
     exit(0);
   }
   if(iNo < 0)
   {
     iNo = - iNo;
   }
   for(iCnt = 2; iCnt <= iNo/2; iCnt++)
   {
     if(iNo % iCnt == 0)
     {
       sum = sum + 1; 
     }
   }
    if(sum > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
*/

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {  iNo = -iNo;  }
    //       1         2          3
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)    // 4
        {
            break;                // 1.break is a keyword which is used to stop the execution of loop.
        }                         // 2.return keyword is used to terimate the function.But not used terminate the loop.
    }                             // 3.exit(0) it is used to terimanate the program.  
    if(iCnt == (iNo/2)+1)          
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}