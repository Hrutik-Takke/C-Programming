
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcpyX
//  Input : Character[]
//  Output : void
//  Description : Accept two string from user and concatenate the string .(copy first string at the end of second string) 
//  Date : 29/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';  //
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyX(arr,brr);   // strcpyX(100,200)
    printf("After copy string is : %s\n",brr);    
    return 0;
}

/*

void StrcpyX(char *Src, char *Dest)
{
    if(Src == NULL || Dest == NULL)
    {
        return;
    }
    while(*Src != '\0' )
    {
        *Src++;
    }
     *Src = ' ';
     *Src++;
    while(*Dest != '\0')
    {
        *Src = *Dest;
        *Src ++;
        *Dest++;
    }
     *Src = '\0';
}
int main()
{
   char Src[10], Dest[10];

   printf("Enter your first name :");
   scanf("%[^'\n']s",Src);
   printf(" Enter Your Surname :");
   scanf(" %[^'\n']s",Dest);
   StrcpyX(Src,Dest);
   printf("Your full name is :%s\n",Src );
   return 0;
}*/