
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcpyrevX
//  Input : Character[], Character[]
//  Output : void
//  Description :  Accept a string from user and copy that string in another string in reverse order. 
//  Date : 29/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
// Input : Hello
// Output : olleH

void strcpyrevX(char src[], char dest[])
{
    int iCnt = 0;
    if(src == NULL || dest == NULL)
    {
        return;
    }                                    // iCnt = 0
    while(*src != '\0')                 //  a   b   c   d   \0
    {
        src++;   // 105
        iCnt++;  // 5                   //  d   c   b   a   \0
    }
    src--;       // 104
    while(iCnt > 0)
    {
        *dest = *src;
        src--;
        dest++;
        iCnt--;
    }
    *dest = '\0'; // 105
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyrevX(arr,brr);   // strcpyX(100,200)
    printf("After copy string is : %s\n",brr);    
    return 0;
}

/*----------- Method 2 -------------*/
void ReverseX(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        *Src++;
    }
     *Src--;
    while(*Src != 0)
    {
        *Dest = *Src;
        *Src--;
        *Dest++;
    }
    *Dest = '\0';
}

int main()
{
  char Arr[10], Brr[10];

  printf("Enter a string : ");
  scanf("%[^'\n']s",Arr);
  ReverseX(Arr,Brr);
  printf("Src is %s",Arr);
  printf("Dest is %s\n",Brr );
  return 0;
}