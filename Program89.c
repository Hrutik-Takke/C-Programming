
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strtoggleX
//  Input : Charcter[]
//  Output : void
//  Description :  Accept the string from user and toggle the string.
//  Date : 28/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
// Input : ABcD@123
// Output : abCd@123
void strtoggleX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')   
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;   // Function ne changes kele li string la return ani printf dhoni nay karay cha.
        }                       // karan apen address var kaam kartoy. 
        str++;
    }
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);             // struprX(100);   Apen Address pathav toy.Tya mule return karay chi garaj nahi.
    printf("Updated string is: %s\n",Arr);
    return 0;
} 