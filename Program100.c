
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcatXX
//  Input : Character[], Character[]
//  Output : void
//  Description : Accept two string from user and concatenate the string .(copy first string at the end of second string)
//  Date : 29/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcatX(const char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;
    while(*src!= '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[50];
    char brr[50];
    
    printf("Enter first string\n");
    scanf("%[^'\n']s",arr);             // Demo
    printf("Enter second string\n");
    scanf(" %[^'\n']s",brr);            // Hello
    strcatX(arr,brr);
    printf("After concat strinng is : %s\n",brr); // Hello Demo
    
    return 0;
}