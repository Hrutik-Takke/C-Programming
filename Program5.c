


//////////////////////////////////////////////
//
//  Function Name : Sum()
//  Input : 5
//  Output : 15 (1 + 2 + 3 + 4 + 5) 
//  Input : -6
//  Output : 21  (1 +  2 +  3 +  4 +  5 +  6)
//  Description : Accept number from user and return the addition of all numbers till that number.
//  Date : 20/07/2021
//  Author : Hrutik Takke
//
/////////////////////////////////////////////

 
#include <stdio.h>

int Sum(int iNo)   // 5
{
    int iCnt = 0, iSum = 0;
    if(iNo == 0)
    {
        return 0;
    }
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    //      1          2          3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;    // 4
    }
    return iSum;
}
int main()  // Entry point function
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iNo);
    iRet = Sum(iNo);
    
    printf("Addtion is : %d\n",iRet);
  
    return 0;
}
