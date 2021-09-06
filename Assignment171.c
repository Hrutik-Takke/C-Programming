 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Input : Integer[], Integer
//  Output : Integer
//  Description : Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//  Date : 06/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
  int  iCnt = 0, eSum = 0, oSum = 0;
  if((Arr == NULL) || (iLength <= 0))
  {  
     return -1;
  }
  for(iCnt = 0; iCnt < iLength ; iCnt++)
  {
    if((Arr[iCnt] % 2) == 0)
    {
       eSum = eSum + Arr[iCnt];
    }
    else
    {
      oSum = oSum + Arr[iCnt];
    }
  }
   return eSum - oSum; 
}
 int main()
 {
   int iSize = 0,iRet = 0,iCnt = 0;
   int *p = NULL;

   printf("\nEnter number of elements : ");
   scanf("%d",&iSize);
   p = (int *)malloc(iSize * sizeof(int));
   
   if(p == NULL)
   {
     printf("\nUnable to allocate memory");
     return -1;
   }
   printf("\nEnter %d elements ",iSize);
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
	   printf("\nEnter element : %d : ",iCnt+1);
 	   scanf("%d",&p[iCnt]);
   }
    iRet = Difference( p, iSize);
    printf("\nResult is %d",iRet);
    free(p);
    return 0;
}