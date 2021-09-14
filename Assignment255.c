 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Input : Char *
//  Output : void
//  Description : Write a program which accept string from user reverse that string in place.
//  Date : 12/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 Write a program which accept string from user reverse that string in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/
void StrRevX(char *str)
{
  char *End;
   End = str;
  char Temp = '\0';
  if(str == NULL)
  {
  	printf("Invalid Input\n");
  	return;
  }
  while(*End != '\0')
  {
  	End++;
  }
  End--;
  while(*End > *str)
  {
  	Temp = *str;
  	*str = *End;
  	*End = Temp;
  	str++;
  	End--;
  }
}
int main()
{
 char arr[20];
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 StrRevX(arr);
 printf("Modified string is %s",arr);
 return 0;
}

/* ------- Using Another Method --------------
void StrRevX(char *str)
{
  int Start = 0,End = 0;
  char Temp = '\0';
  if(str == NULL)
  {
  	printf("Invalid Input\n");
  	return;
  }
  while(str[End] != '\0')
  {
  	End++;
  }
  End--;
  while(End > Start)
  {
  	Temp = str[Start];
  	str[Start] = str[End];
  	str[End] = Temp;
  	Start++;
  	End--;
  }
}
int main()
{
 char arr[20];
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 StrRevX(arr);
 printf("Modified string is %s",arr);
 return 0;
}
*/