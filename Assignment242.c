
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : struprx
//  Input : Char *
//  Output : void
//  Description : Write a program which accept string from user and convert it into upper case.
//  Date : 12/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
/*
Write a program which accept string from user and convert it into upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/

void struprx(char *str)
{
  if(str == NULL)
  {
  	return;
  }
  while(*str != '\0')
  {
  	if(( *str >= 'a') && (*str <= 'z'))
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
struprx(arr);
printf("Modified string is %s",arr);
return 0;
}