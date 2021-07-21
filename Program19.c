

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigits
//  Input : Integer
//  Output : ---
//  Description : Accept number from user and display the digits of that numbers separately in reverse order.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 7521
// Output :  1
//           2
//           5
//           7

#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {  iNo = -iNo;  } 
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;      // Remainder deto
        printf("%d\n",iDigit);
        iNo = iNo / 10;         // Quotient deto
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
    return 0;
}
