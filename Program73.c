
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FirstOccurance
//  Input : Integer[], Integer
//  Output : Integer
//  Description : Accept N number from user and accept one another number. Return position of Last Occurance.
//  Date : 27/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// Last Occurance.
// Input : N(5) 73 21 53 21 54
// Input : iNo(21)
// Output : 4

#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int Arr[], int iLength, int iValue)
{
    int i = 0,Flag = 0;
    for(i = iLength; i>0; i--)
    {
        if(Arr[i] == iValue)
        {
            break;
        }
    }
    return i;
}
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
    iRet = LastOccurance(arr,iSize,iNo);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurance is at: %d\n",iRet);
    }
    free(arr);
    return 0;
}
