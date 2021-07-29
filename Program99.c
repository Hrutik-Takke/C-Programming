
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
    char arr[20];
    char brr[20];
    
    printf("Enter first string\n");   //   Demo
    scanf("%[^'\n']s",arr);
    printf("Enter second string\n");  //   Hello
    scanf(" %[^'\n']s",brr);          //   Scanf madhi space takha manje input gheyin.    
    strcatX(arr,brr);
    printf("After concat strinng is : %s\n",brr); // HelloDemo
    
    return 0;
}

/*--------- Method 2 -----------------
void strcatX(char *Src,char *Dest)
{
    if(Src == NULL || Dest == NULL)
    {
        return;
    }
    while(*Dest != '\0')
    {
        *Dest++;
    }
    *Dest = ' ';
    *Dest++;
    while(*Src != '\0')
    {
        *Dest = *Src;
        *Dest++;
        *Src++;
    }
    *Dest = '\0';
}
int main()
{
   char Arr[10],Brr[20];

   printf("Enter a string ");
   scanf("%[^'\n']s",Arr);
   printf("Enter second String ");
   scanf(" %[^'\n']s",Brr);
   strcatX(Arr,Brr);
   printf("After concatenation : %s",Brr);
   return 0;
}
*/