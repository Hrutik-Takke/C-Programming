 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input : Character
//  Output : Void
//  Description : Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//  Date : 10/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
/*  
Input : A
Output : Decimal 65
Octal 0101
Hexadecimal 0X41
*/
void Display (char ch)
{
   printf("%d %o %x\n",ch,ch,ch );
}
int main()
{
 char cValue = '\0';
 printf("Enter the character");
 scanf("%c",&cValue);
 
 Display(cValue);
 return 0;
}