
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : struprX
//  Input : Charcter[]
//  Output : void
//  Description :  Accept the string from user and convert the smaller characters into capital characters.
//  Date : 28/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;    // Function ne changes kele li string la return ani printf dhoni nay karay cha.
        }                        // karan apen address var kaam kartoy.
        str++;
    }
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    struprX(Arr);   // struprX(100);
    printf("Updated string is: %s\n",Arr);
    return 0;
}
