
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountA
//  Input : Charcter[]
//  Output : void
//  Description :  Accept the string from user and return the frequency of 'a' and 'A'.
//  Date : 28/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountA(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))
        {   iCnt++; }
        str++;
    }
    return iCnt;
}
/* ------------- Method 2 ----------------
int CountA(char *str)
{
   int iCnt = 0,i = 0 ;
    while( str[i] != '\0')
    { 
        if(( str[i] == 'a') || (str[i] == 'A'))
        {
            iCnt++;  
        }
        i++;
    } 
    return iCnt;
}
*/
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountA(Arr);   // Display(100)
    printf("Frequency of A/a is: %d\n",iRet);
    return 0;
}