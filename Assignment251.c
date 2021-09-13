
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Input : char *, char
//  Output : BOOL
//  Description : Write a program which accept string from user and accept one character. Check whether that
//                character is present in string or not.
//  Date : 13/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 

#include<stdio.h>
#include<stdbool.h>
 
/* 
Input : “Marvellous Multi OS”
         e
Output : TRUE
Input : “Marvellous Multi OS”
		 W
Output : FALSE
*/
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkChar(char *str, char ch)
{
  if(str == NULL || ch == 0)
  {
  	return FALSE;
  }
  while(*str != '\0')
  {
  	if(*str == ch)
     {
     	return TRUE;
     }
     str++;
  }
  return FALSE;
}
int main()
{
 char arr[20];
 char cValue;
 BOOL bRet = FALSE;
 printf("Enter string ");
 scanf("%[^'\n']s",arr);
 printf("Enter the character ");
 scanf(" %c",&cValue);
 bRet = ChkChar(arr, cValue);
 if(bRet == TRUE)
 {
   printf("Character found");
 }
 else
 {
   printf("Character not found");
 }
 return 0;
}