

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input : Integer, char
//  Output : void
//  Description :  Accept a number and character from user and display that number of characters.
//  Date : 24/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Input : 5    A
// Output : A   A   A   A   A
// Input : 3    F
// Output : F   F   F

#include<stdio.h>
void Pattern(unsigned int iNo,char ch)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
/* //////////// MY Code /////////////
void Pattern(unsigned int iNo,char ch)
{
   int i = 0;
   for( i = 1; i <= iNo ; i++)
   {
      printf("%c  ",ch );
   }
}*/
int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';          // '\0'(Back slash zero) Default value of character.
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter character\n");
    scanf(" %c",&cValue);        // Input Buffer -> manje jyat input ghenar ahe tyala flush karnya sathi.
                                 //                 magcha Enter remove karnya sathi.
    Pattern(iValue,cValue);
    return 0;
}

