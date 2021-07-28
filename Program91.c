
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : StrrevX
//  Input : Charcter[]
//  Output : void
//  Description :  Accept the string from user and reverse the string. 
//  Date : 28/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// String reverse
#include<stdio.h>
void Display(char str[])
{
    int iCnt = 0;
    if(str == NULL)
    {  return;  }
    while(*str != '\0')  // Ek while loop use kele ki Time Complexity (N).
    {
        iCnt++;
        str++;
    }
    str--;
    while(iCnt > 0)      // Hya Program madhi Time Complexity (2N) ahe. 
    {
        printf("%c",*str);
        iCnt--;
        str--;
    }
    printf("\n");
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr);
    // printf("%s\n",Arr );
    return 0;
}

 /* ------- First Method -----------
 void StrrevX(char str[])
 {
    int i = 0;
     while( str[i] != '\0')
     {  
        i++;
     }

     while(i >= 0)
     {
        printf("%c",str[i] );
        i--;
     }
 }
 int main()
 {
    char Arr[10];
     printf("Enter the string ");
     scanf("%[^'\n']s",Arr);    // Arr(100)
     StrrevX(Arr);
 }
*/ 


 /*  ------- Second Method  --------
 void StrrevX(char *str)
 {
     while( *str != '\0')
     {  
        *str++;
     }
    *str--;
     while(*str != 0)
     {
        printf("%c",*str );
        *str--;
     }
 }
 int main()
 {
    char Arr[10];
     printf("Enter the string ");
     scanf("%[^'\n']s",Arr);
     StrrevX(Arr);
 }
 */