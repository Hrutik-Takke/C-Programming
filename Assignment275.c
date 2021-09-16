 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkBit
//  Input : unsigned int
//  Output : int
//  Description : Write a program which checks whether first and last bit is On or OFF.
//  		      First bit means bit number 1 and last bit means bit number 32.
//  Date : 15/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
/*
5. Write a program which checks whether first and last bit is On or OFF.
   First bit means bit number 1 and last bit means bit number 32.
   Solution :
 */
 
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
  UINT iResult = 0, iMask = 0x80000001;
  iResult = iMask & iNo;
  if(iResult == iMask)
  {
  	return TRUE;
  }
  else
  {
  	return FALSE;
  }  
}
int main()
{
  UINT iValue = 0;
  BOOL iRet = 0;

  printf("Enter a number\n");
  scanf("%u",&iValue);
  iRet = ChkBit(iValue);
  if(iRet == TRUE)
  {
  	 printf("Bits is on\n");
  }
  else
  {
  	printf("Bits is off\n");
  }
  return 0;
} 