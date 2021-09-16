 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : onBit
//  Input : unsigned int
//  Output : unsigned int
//  Description : Write a program which accept one number from user and on its first 4 bits. Return modified number.
//  Date : 16/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
/*
Write a program which accept one number from user and on its first 4 bits. Return modified number.
Input : 73
Output : 79
*/

UINT OnBit(UINT iNo)
{
  UINT iResult = 0, iMask = 0x0000000F;
  iResult = iMask | iNo;
  return iResult;
}
int main()
{
   UINT iRet = 0,iValue = 0;

   printf("Enter a number\n");
   scanf("%d",&iValue);

   iRet = OnBit(iValue);
   printf("New number is %u\n",iRet );
   return 0;
}