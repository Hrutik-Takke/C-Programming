 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Input : Integer[], Integer
//  Output : Void
//  Description : Accept N numbers from user and display all such numbers which contains 3 digits in it.
//  Date : 07/09/2021
//  Author : Hritik Takke
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858

#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[], int iLength)
{
  int iCnt = 0, iDigit = 0,Temp = 0;
  if((Arr == NULL) || (iLength == 0))
  {  
  	 printf("Invalid Range");
  	 return;
  }
  for(iCnt = 0; iCnt < iLength; iCnt++ ) 
  {   
  	 for( Temp = Arr[iCnt], iDigit = 0; Arr[iCnt] > 0; Arr[iCnt] = Arr[iCnt]/10)
  	 {
  	 	iDigit++;
  	 }
  	 if(iDigit == 3)
  	 {
  	 	printf("%d\n",Temp);
  	 } 
  }
}
int main()
{
  int iSize = 0,iRet = 0,iCnt = 0;
  int *p = NULL;

  printf("\nEnter number of elements ");
  scanf("%d",&iSize);
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
  Digits(p, iSize);
  free(p);
  return 0;
}