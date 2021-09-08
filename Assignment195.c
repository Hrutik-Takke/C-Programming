
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Product
//  Input : Integer[], Integer
//  Output : Integer
//  Description : Accept N numbers from user and return product of all odd elements.
//  Date : 08/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0

#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[], int iLength)
{
  int iCnt = 0, iSum = 0;
  if((Arr == NULL) || ( iLength == 0 ))
   {
   	  return -1;
   } 
   for(iCnt = 0; iCnt < iLength ; iCnt++)
   {
   	 if(Arr[iCnt] % 2 == 1)
   	 {
   	 	iSum = iSum + Arr[iCnt];
   	 }
   }
   return iSum;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;

printf("Enter number of elements");
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
printf("\nEnter element : %d",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet = Product(p, iSize);
printf("Product is %d",iRet);
free(p);
return 0;
}