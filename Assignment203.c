 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Input : Integer[], Integer
//  Output : Integer
//  Description : Accept N numbers from user and return the difference between largest and smallest number.
//  Date : 08/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Difference(int Arr[], int iLength)
{
  int iCnt = 0,Max =0, Min = 2147483647;
  if((Arr == NULL) || (iLength == 0))
  {
  	 return -1;
  }
  for(iCnt = 0; iCnt < iLength; iCnt++ ) 
  {
  	if( Arr[iCnt] < Min)
  	{
  		Min = Arr[iCnt];
  	}
  	if(Arr[iCnt] > Max)
  	{
  		Max = Arr[iCnt];
  	}
  } 
   return Max - Min;
}
int main()
{
  int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
  int *p = NULL;
  printf("Enter number of elements ");
  scanf("%d",&iSize);
  p = (int *)malloc(iSize * sizeof(int));
 
 if(p == NULL)
 {
	printf("Unable to allocate memory");
	return -1;
 }
 printf("\nEnter %d elements ",iSize);
 for(iCnt = 0;iCnt < iSize; iCnt++)
 {
	printf("Enter element : %d ",iCnt+1);
	scanf("%d",&p[iCnt]);
 }
 iRet = Difference(p, iSize);
 printf("Difference is %d",iRet);
 free(p);
 return 0;
 }