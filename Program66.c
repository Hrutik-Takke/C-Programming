
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input : Integer[], Integer
//  Output : void
//  Description :  Accept N numbers from user and display that number.
//  Date : 26/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////


// Q. Accept N numbers from user and display that number.
#include<stdio.h>
#include<stdlib.h>                                       // Standard Library
// void Display(int *Arr, int iSize)         Aase lihle tari chalan because array is internally considered as a Pointer.

void Display(int Arr[], int iSize)                       // Step 6
{
    int i = 0;
    printf("Elements from the array are : \n");
    for(i=0; i < iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }
}
//-----------------------------------------------------------------
int main()
{
    int *arr = NULL;                                     // Step 1
    int iLenth = 0, i = 0;
    
    printf("Enter the number of elements\n");            // Step 2
    scanf("%d",&iLenth);
    arr = (int*)malloc(iLenth * sizeof(int));            // Step 3  (Dynamic Memory Allocation)
    
    printf("Enter the elements\n");                      // Step 4
    for(i = 0; i < iLenth; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr,iLenth);   // Display(100,5)             // Step 5
    free(arr);                                           // Step 7
    return 0;
}  

 //  Array is internally considered as poiter and pointer can be Treated as a array.
 // (Manje Dhoni gosthi ultya sultya vaparta yeetat.)

 //  Malloc() chi return type Void* aste i.e of 8bytes. manje apen tyala 4 bytes madhi kadhu nay shakt.
 //  mhnun tyala typecast kelay.
 

 