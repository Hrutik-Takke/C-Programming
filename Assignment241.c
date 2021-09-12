
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Input : char *
//  Output : void
//  Description : Write a program which accept string from user and convert it into lower case.
//  Date : 12/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
  
/*
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/

void strlwrx(char *str)
{
  if(str == NULL)
  {
  	return;
  }
  while(*str != '\0')
  {
  	if(( *str >= 'A') && (*str <= 'Z'))
  	{
  		*str = *str + ('a' - 'A');
  	}
  	str++;
  }
}
int main()
{
 char arr[20];
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 strlwrx(arr);
 printf("Modified string is %s",arr);
 return 0;
}