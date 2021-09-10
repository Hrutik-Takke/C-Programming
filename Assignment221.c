
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Input : 
//  Output : Void
//  Description : Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal
//                representation of every member from 0 to 255. 
//  Date : 10/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
#include<stdlib.h>
#include<stdio.h>

void DisplayASCII()
{
  int iCnt = 0;
  while(iCnt <= 255)
  {
  	printf("%d %x %c\n",iCnt,iCnt,iCnt);
  	iCnt++;
  }
   
   printf("Case 2");
}
int main()
{
  printf("Case 1");
  DisplayASCII();
  return 0;
}