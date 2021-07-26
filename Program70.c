
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : EvenCount
//  Input : Integer[], Integer
//  Output : Integer
//  Description :  Accept N number from user and display count of even digit.
//  Date : 26/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept N number from user and display count of even digit.
// Input : N(5) (10,11,12,13,14)
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iLength)
{
    int iCnt = 0, i = 0;
    if((Arr == NULL) || (iLength <= 0))
    {  
        return;
    }
    
    for(i = 0; i< iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = EvenCount(arr,iSize);
    printf("Even elements are : %d\n",iRet);
    free(arr);
    return 0;
}