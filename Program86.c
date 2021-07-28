
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountCap
//  Input : Charcter[]
//  Output : integer
//  Description :  Accept the string from user and return the count of white spaces.
//  Date : 28/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. program to count white spaces.
#include<stdio.h>

int CountCap(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {  return 0;  }
    while(*str != '\0')
    {
        if(*str == ' ')
        {   iCnt++; }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCap(Arr);   // Display(100)
    printf("Frequency of whitespace is: %d\n",iRet);
    return 0;
}
