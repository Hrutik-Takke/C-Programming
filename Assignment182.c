
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Input : Integer[], Integer
//  Output : Integer
//  Description : Accept N numbers from user and return difference between frequency of even number and odd numbers.
//  Date : 07/09/2021
//  Author :  Hritik Takke
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
 Input : N : 7
 Elements : 85 66 3 80 93 88 90
 Output : 1 (4 -3)
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{ 
  int iCnt = 0, eCnt = 0, oCnt = 0;
  if(( Arr == NULL) || (iLength == 0))
  {
  	return -1;
  }
  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if((Arr[iCnt] % 2)== 0)
    {
    	eCnt++;
    }
    else
    {
    	oCnt++;
    }	
  }
  return eCnt - oCnt;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;

printf("Enter number of elements \n");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));

if(p == NULL)
{
 	printf("Unable to allocate memory");
 	return -1;
}
printf("Enter %d elements ",iSize);
for(iCnt = 0;iCnt < iSize; iCnt++)
{
 	printf("Enter element : %d  ",iCnt+1);
 	scanf("%d",&p[iCnt]);
}
iRet = Frequency(p,iSize);
if(iRet == -1)
{
	printf("Invalid Input");
	return -1;
}
printf("%d",iRet);
free(p);
return 0;
}