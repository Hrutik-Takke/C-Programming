
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Input : Character *
//  Output : interger
//  Description : Write a program which accept string from user and count number of small characters.
//  Date : 11/09/2021
//  Author :  Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
  
/*
Input : “Marvellous”
Output : 9
*/
int CountSmall(char *str)
{
 int iCnt = 0;
 if(str == NULL)
 {
 	return -1;
 }
 while(*str != '\0')
 {
   if((*str >= 'a') && (*str <= 'z'))
   {
   	 iCnt++;
   }
   str++;
 }
 return iCnt;
}
int main()
{
 char arr[20];
 int iRet = 0;
 printf("Enter string ");
 scanf("%[^’\n’]s",arr);
 iRet = CountSmall(arr);
 printf("%d",iRet);
 return 0;
}  
  