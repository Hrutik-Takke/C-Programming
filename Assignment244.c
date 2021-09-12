 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Input : char *
//  Output : void
//  Description : Write a program which accept string from user and display only digits from that string.
//  Date : 12/09/2021
//  Author : Hritik Takke
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
/*
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :
*/

void DisplayDigit(char *str)
{
  if(str == NULL)
  {
  	return;
  }
  while(*str != '\0')
  {
  	if((*str >= '0' ) && (*str <= '9'))
  	{
  		printf("%c",*str );   // %d use kele ki number chi ASCII value print hoyen.eg( 1 -> 49).
  	}
  	str++;
  }
}
int main()
{
 char arr[20];
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 DisplayDigit(arr);
 return 0;
}