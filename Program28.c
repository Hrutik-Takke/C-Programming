
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckPallindrome
//  Input : Integer
//  Output : Boolean
//  Description : Accept number from user and check whether that number is pallindrom or not.
//  Date : 22/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q.Accept number from user and check whether that number is pallindrom or not.
// Input : 7521
// Output : False
// Input : 121
// Output : True
// Input : 75057
// Output : True
// Question madhe chack whether aslya var return value boolean theva ie(return true or false).

#include<stdio.h>
#include<stdbool.h>
// Time complexity : O(N)  Order of n. where N is the number of digits in the input

bool CheckPallindrome(int iNo)
{
    int iDigit =0, iRev = 0, iTemp = 0;
    if(iNo < 0)
    {  iNo = -iNo;  }
    iTemp = iNo;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {  return true;  }
    else
    {  return false;  }
}

int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("It is pallindrome\n");
    }
    else
    {
        printf("It is not pallindrome\n");
    }
        return 0;
}
    
