
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ToggleBit
//  Input : int 
//  Output : int
//  Description : Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
//  Date : 16/09/2021
//  Author : Hritik Takke
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
/*
Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
Input : 137
Output : 201
*/
UINT ToggleBit(UINT iNo)
{
  UINT iResult = 0,iMask = 0x00000040;
  iResult = iMask ^ iNo;
  return iResult;
}
int main()
{
   UINT iRet = 0,iValue = 0;

   printf("Enter a number\n");
   scanf("%d",&iValue);

   iRet = ToggleBit(iValue);
   printf("New number is %u\n",iRet );
   return 0;
}