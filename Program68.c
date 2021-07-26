
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : SumElements
//  Input : Integer[], Integer
//  Output : Integer
//  Description :  Accept N numbers from user and display addition of that N numbers.
//  Date : 26/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////


// Q.Accept N numbers from user and display addition of that N numbers.

#include<stdio.h>
#include<stdlib.h>

int SumElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0, iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize * sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = SumElements(arr,iSize);
    printf("Summation of all the elemets is : %d\n",iRet);
    free(arr);
    return 0;
} 
///////////////////// My Code ///////////////////////////
/*
 #include<stdio.h>
 #include<stdlib.h>
 void Addition(int *Arr,int iValue)
 {  
    int i = 0, sum = 0;
    if((Arr == NULL) || (iValue <= 0))
    {
        printf("Somthing Went Wrong !\n");
        return;
    }
     for( i = 0; i < iValue; i++ )
     {
        sum = sum + Arr[i];
     }
      printf("Addition of All numbers %d\n",sum );
 }

 int main()
 {
    int *Arr = NULL;
    int i = 0, iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    Arr = (int*)malloc(iValue * sizeof(int));

    if(Arr == NULL)
    {
        printf("Unable to Allocate the memory");
        return -1;
    }

    printf("Enter %d Elements : ",iValue );
    for (int i = 0; i < iValue; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Addition(Arr,iValue);
    free(Arr);
    return 0; 
 }
 */
