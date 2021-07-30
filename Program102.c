
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strncpyX
//  Input : Character[], Character[], Integer
//  Output : void
//  Description : Accept a string and accept number of elements to copy from source string to destination string.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strncpyX(const char src[], char dest[], int value)
{
        if((src == NULL) || (dest == NULL) || (value <= 0))
        {
            return;
        }
        
        while((value>0) && (*src != '\0'))
        {
            *dest = *src;
            dest++;
            src++;
            value--;
        }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    int iNo = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter number of elements to copy\n");
    scanf(" %d",&iNo);
    
    strncpyX(arr,brr,iNo);
    printf("String after copy is : %s\n",brr);
    return 0;
}