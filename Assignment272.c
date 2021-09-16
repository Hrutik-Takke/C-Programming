
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkBit
//  Input : unsigned int
//  Output : int
//  Description : Write a program which checks whether 5th & 18th bit is On or OFF.
//  Date : 15/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
/* 
2. Write a program which checks whether 5th & 18th bit is On or OFF.
Solution :
*/
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
   UINT iRet = 0,iMask = 0X00020010;
   iRet = iMask & iNo;
   if(iRet == iMask)
   {
      return TRUE;
   }   
   else
   {
   	 return FALSE;
   }

}
BOOL main()
{
	UINT iDigit = FALSE,iRet = FALSE;

	printf("Enter a number  ");
	scanf("%u",&iDigit);
	iRet = ChkBit(iDigit);
    if(iRet == TRUE)
    {
    	printf("Bits are on\n");
    }
    else
    {
    	printf("Bit is off\n");
    }
    return 0;
}  
  