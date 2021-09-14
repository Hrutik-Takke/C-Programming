 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Input : char *,char
//  Output : int
//  Description : Write a program which accept string from user and accept one character.
//				  Return index of last occurrence of that character.
//  Date : 13/09/2021
//  Author : Hritik Takke
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
/* 
 Write a program which accept string from user and accept one character.
 Return index of last occurrence of that character.
 
Input : “Marvellous Multi OS”
		 M
Output : 11
Input : “Marvellous Multi OS”
		 W
Output : -1
Input : “Marvellous Multi OS”
		 e
Output : 4
*/
int LastChar(char *str, char ch)
{  
  int End = 0;
  if(str == NULL || ch == 0)
  {
  	return -1;
  }
  while(*str != '\0')
  {
  	End++;
  	str++;
  }
  End--;
  str--;
  while(*str != 0)
  { 
  	if(*str == ch)
  	{
      return End;
  	}
  	End--;
  	str--;
  }
  return -1;
}
int main()
{
 char arr[20];
 char cValue;
 int iRet = 0;
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 printf("Enter the character ");
 scanf(" %c",&cValue);
 iRet = LastChar(arr, cValue);
 if(iRet == -1)
 {
 	printf("Character Not Found\n");
 }
 else
 {
 	printf("Character location is %d ",iRet);
 }
 return 0;
}  