 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Input : Integer[], Integer, Integer
//  Output : Integer
//  Description : Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
//  Date : 07/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1

#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[], int iLength, int iNo)
{
   int iCnt = 0;
   if((Arr == NULL) || ( iLength == 0 ))
   {
   	  return -1;
   } 

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
   	 if(Arr[iCnt] == iNo)
   	 {
   	 	return iCnt;
   	 }	
   }
    return -1;
}
int main()
{
  int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
  int *p = NULL;

  printf("\nEnter number of elements");
  scanf("%d",&iSize);
  printf("\nEnter the number that you want to search ");
  scanf("%d",&iValue);
  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
	printf("Unable to allocate memory");
	return -1;
  }
  printf("\nEnter %d elements ",iSize);
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("\nEnter element : %d ",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  iRet = FirstOcc(p, iSize,iValue);
  if(iRet == -1)
  {
    printf("There is no such number");
  }
  else
  {
    printf("First occurrence of number is %d",iRet+1);
  }
  free(p);
  return 0;
}