 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Input : Char *
//  Output : int
//  Description : Write a program which accept string from user and count number of white spaces.
//  Date : 12/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


/*
  
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/

int CountWhite(char *str)
{
  int iCnt = 0;
  if(str == NULL)
  {
  	return -1;
  }
  while(*str != '\0')
  {
  	if(*str == ' ')
  	{
  		iCnt++;
  	}
  	str++;
  }
  return iCnt;
}
int main()
{
 char arr[20];
 int iRet = 0;
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 iRet = CountWhite(arr);
 printf("White spaces are : %d",iRet);
 return 0;
}
 
 