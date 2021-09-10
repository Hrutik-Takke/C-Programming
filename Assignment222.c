
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input : Character
//  Output : Void
//  Description : Accept character from user. If character is small display its corresponding capital character,
//                and if it small then display its corresponding capital. In other cases display as it is.
//  Date : 10/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
   
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %


void Display(char ch)
{
  if((ch >= 'A') && (ch <= 'Z'))
  {
  	printf("%c",ch+32);
  }
  else if((ch >= 'a') && (ch <='z'))
  {
  	printf("%c",ch-32);
  }
  else
  {
  	printf("%c\n",ch);
  }
}
int main()
{
char cValue = '\0';
printf("Enter the character");
scanf("%c",&cValue);
Display(cValue);
return 0;
}