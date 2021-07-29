
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcatXX
//  Input : Character[], Character[]
//  Output : void
//  Description : Accept a string and character from user and check wheather that character is in that string or not.
//  Date : 29/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
//#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char  ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        *str++;
        printf("%c\n",*str );
    }
    

    if (*str != '\0')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char arr[20];
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if (bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;
}
