
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strlwrX
//  Input : Charcter[]
//  Output : void
//  Description :  Accept the string from user and convert the capital characters into smaller characters.
//  Date : 28/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;  // Function ne changes kele li string la return ani printf dhoni nay karay cha.
        }                      // karan pen address var kaam kartoy.
        str++;
    }
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    strlwrX(Arr);
    printf("Updated string is: %s\n",Arr);
    return 0;
}
