 
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCatX
//  Input : char *, char *
//  Output : void
//  Description :  Write a program which accept 2 strings from user and concat second string after first string.
//    			  (Implement strcat() function).
//  Date : 14/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
/*
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”
*/
void StrCatX(char *src, char * dest)
{
  if(src == NULL || dest == NULL)
  {
  	 return;
  }
  while(*src != '\0') // Traverse first string till end
  {
   src++;
  }
  *src = ' ';
  src++;
  while(* dest != '\0') // Copy contents of destination in source
  {
    *src = *dest;
     src++;
     dest++;
  }
 *dest = '\0';
}
int main()
{
 char arr[50] = "Marvellous Infosystems";
 char brr[30] = "Logic Building";
 StrCatX(arr,brr);
 printf("%s",arr);
 return 0;
}