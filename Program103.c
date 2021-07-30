
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayBinary
//  Input : Integer
//  Output : void
//  Description : Accept number from user and convert that number into binary format and display it on screen.
//  Date : 30/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept number from user and convert that number into binary format and display it on screen.
#include<stdio.h>
void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        iNo = iNo / 2;
    }
}
/*--------- Method 2 -----------
void DisplayBinary(int iValue)
{
   int sum = 0;
   while(iValue != 0)
   {
     sum = (sum * 10) + iValue % 2;
     iValue = iValue / 2;
   }
   printf("%u",sum );
}*/
int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    
    return 0;
}