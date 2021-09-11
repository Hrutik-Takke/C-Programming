
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Input : Char *
//  Output : int
//  Description : Write a program which accept string from user and return difference between frequency of small
//                characters and frequency of capital characters. 
//  Date : 11/09/2021
//  Author : Hritik Takke
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

/* 
Input : "MarvellouS"
Output : 6 (8-2)
*/
int Difference(char *str)
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
     else if((*str >= 'A') && (*str <= 'Z'))
    {
      iCnt--;
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
 scanf("%[^'\n']s",arr);
 iRet = Difference(arr);
 printf("%d",iRet);
 return 0;
}