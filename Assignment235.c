 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Input : Char *
//  Output : Void
//  Description : Write a program which accept string from user and display it in reverse order.
//  Date : 11/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
/*  
Input : “MarvellouS”
Output : “SuollevraM”
*/
void Reverse(char *str)
{
  if(str == NULL)
  {
  	return;
  }
  while(*str != '\0')
  {
  	str++;
  }
   str--;
   while(*str != 0)
   {
   	 printf("%c",*str );
   	 str--;
   }
}
int main()
{ 
 char arr[20];
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 Reverse(arr);
 return 0;
}