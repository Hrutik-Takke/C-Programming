
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OffBit
//  Input : Integer, Integer
//  Output : Integer
//  Description : Accept a number from user as well as accept one position and OFF the bit of that perticular positon if it is ON.
//  Date : 31/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. Accept a number from user as well as accept one position and OFF the bit of that perticular positon if it is ON.
//    (Toggle nahi jala pahije.)
// Input 15 (iValue)
// Input 3 (iNo)
// Output 11

#include<stdio.h>
#include<stdbool.h>

/*
                    iPos = 4
 
 Input                   1       0       1       0       1       1       0       0
                         1       1       1       1       0       1       1       1         &
                        ___________________________________________________________
 
 Output                  1       0       1       0       0       1       0       0

*/
unsigned int OffBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {   return 0;  }
    
    iMask = iMask << (iPos-1);    
    iMask = ~iMask;             // jith 1 ahe tith 0 hoyen.Ani 0 ch tith 1 hoyen. 
    
    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    unsigned int iValue = 0,iPos = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);
    
    iRet = OffBit(iValue,iPos);
    
    printf("New number is : %u\n",iRet);
    return 0;
}
