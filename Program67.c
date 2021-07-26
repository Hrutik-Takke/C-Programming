
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayEven
//  Input : Integer[], Integer
//  Output : void
//  Description :  Accept N numbers from user and display that number.
//  Date : 26/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[], int iLength)
{
    int i = 0;
    if((Arr == NULL) || (iLength <= 0))   // To avoid Runtime Accident.Manje runtime la band nako padayla.
    {  
        return -1;
    }
    printf("Even elements are\n");
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    arr = (int *)malloc(iSize * sizeof(int));
    if(arr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elemets\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    DisplayEven(arr,iSize);  // DisplayEven(NULL, -2);
    free(arr);
    return 0;
}
/*
#include<stdio.h>
#include<stdlib.h>
void EvenDisplay(int Arr[], int iValue)
{
   int i = 0;
    
    printf("Elements are : \n");
    for( i = 0; i < iValue; i++ )
    {
       if( Arr[i] % 2 == 0 )
       {
         printf("%d\n",Arr[i] );
       }
    } 
}

int main()
{
    int *Arr = NULL;
    int iValue = 0, i = 0;

    printf("Enter the number of value that you want to store : ");
    scanf("%d",&iValue);
     Arr = (int*)malloc(iValue * sizeof(int));
     
     printf("Enter %d Elements \n",iValue );
     for(i = 0; i <  iValue; i++)
     {
        scanf("%d",&Arr[i]);
     }
      
      EvenDisplay(Arr,iValue);
      free(Arr);
     return 0;
}
*/
