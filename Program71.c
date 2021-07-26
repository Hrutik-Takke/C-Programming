
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FirstOccurance
//  Input : Integer[], Integer, Integer
//  Output : Integer
//  Description : Accept N number from user and accept one another number. check frequency of that number.
//  Date : 26/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Accept N number from user and accept one another number. check frequency of that number.
// Input : N(4) 11 21 51 101
// Input : iNo(51)
// Output : 3

#include<stdio.h>
#include<stdlib.h>
int FirstOccurance(int Arr[], int iLength, int iValue)
{
    int i = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iValue)
        {  break;  }
    }
    if(i == iLength)
    {   return -1;  }
    else
    {   return i;   }
}
/*
//////////////// Method 2 ////////////////////
int FirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt, iSum = -1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iSum = iCnt;
            break;
        }
    }
    return iSum;
}*/

int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0, iNo = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element that you want to search\n");
    scanf("%d",&iNo);
    iRet = FirstOccurance(arr,iSize,iNo);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurance is at: %d\n",iRet+1);
    }
        free(arr);
    return 0;
}
