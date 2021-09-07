 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : frequency
//  Input : Integer[], Integer, Integer
//  Output : Integer
//  Description : Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
//  Date : 07/09/2021
//  Author : Hritik Takke
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength, int iNo)
{
  int iCnt = 0, Sum = 0;
  if((Arr == NULL) || (iLength == 0))
  {
  	return -1;
  }
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
  	if(Arr[iCnt] == iNo)
  	{
  	  Sum++;
  	}
  }
  return Sum; 
}
int main()
{
 int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
 int *p = NULL;

 printf("Enter number of elements ");
 scanf("%d",&iSize);
 printf("\nEnter the number ");
 scanf("%d",&iValue);
 p = (int *)malloc(iSize * sizeof(int));
 if(p == NULL)
 {
  	return -1;
 }
 printf("Enter %d elements\n",iSize);
 for(iCnt = 0; iCnt < iSize; iCnt++)
 {
  	printf("Enter element : %d  ",iCnt+1);
 	scanf("%d",&p[iCnt]);
 }
 iRet = Frequency(p, iSize,iValue);
 printf("Frequency is : %d",iRet);
 free(p);
 return 0;
}
