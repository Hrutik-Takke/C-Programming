 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Input : char *
//  Output : BOOL
//  Description : Write a program which accept string from user and check whether it contains vowels in it or not.
//  Date : 11/09/2021
//  Author : Hritik Takke
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 /*
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/
#define TRUE 1 
#define FALSE 2
typedef int BOOL;
BOOL ChkVowel(char *str)
{
  if(str == NULL)
  {
  	return -1;
  }
  while(*str != '\0')
  {
  	if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
  	   *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
  	{
  		return TRUE;
  	}
  	 str++;
  }
}
int main()
{
 char arr[20];
 BOOL bRet = FALSE;
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 bRet = ChkVowel(arr);
 if(bRet == TRUE)
 {
    printf("Contains Vowel");
 }
 else
 {
    printf("There is no Vowel");
 }
 return 0;
}