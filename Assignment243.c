
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Input : Char *
//  Output : void
//  Description : Write a program which accept string from user and toggle the case.
//  Date : 12/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


/*
 
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/

void strtogglex(char *str)
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
  	else if((*str >= 'a') && (*str <= 'z'))
  	{
  		*str = *str - ('a' - 'A');
  	}
  	str++;
  }
}
int main()
{
 char arr[20];
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 strtogglex(arr);
 printf("Modified string is %s",arr);
 return 0;
}