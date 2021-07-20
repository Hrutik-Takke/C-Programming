// Accept number from user and check whether that number is even or odd.
// Input : 4
// Output : Its even

// Input :7
// Output : Its odd

// % ->remainder
// / ->Quotiont

////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckEven
//  Input : Integer
//  Output : Boolean (True / False)
//  Description : It is used to check whether number is even or odd.
//  Date : 20/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>  // Boolean datatype jar use kele tar hee header file include karay lagti.
bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {   return true;    }
    else
    {   return false;   }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number");
    scanf("%d",&iValue);
    
    bRet = CheckEven(iValue);   // CheckEven(12)
    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}


