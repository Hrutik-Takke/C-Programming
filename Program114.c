
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckBit
//  Input : Integer, Integer, Integer
//  Output : Boolean
//  Description : Accept a number from user as well as accept 2 possitions and check wheather both bits is ON or OFF.
//  Date : 31/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

   
#include<stdio.h>
#include<stdbool.h>
/*
                   iNo        0   1   0   1   0   1   1   0
                   iMask      0   1   0   1   0   1   0   0             &
                        __________________________
                iResult       0  1    0   1   0   1   0   0
*/
// First Method 
         
bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 0X00000001, iMask2 = 0X00000001, iMask = 0X00000000;
    unsigned int iResult = 0;
    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {  return false;  }

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iMask = iMask1 | iMask2;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {return true;}
    else
    {return false;}
}
int main()
{
    unsigned int iValue = 0,iPos1 = 0,iPos2 = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter first position\n");
    scanf("%d",&iPos1);
    printf("Enter second position\n");
    scanf("%d",&iPos2);
    bRet = CheckBit(iValue,iPos1,iPos2);
    if(bRet == true)
    {printf("Bits are on\n");}
    else
    {printf("Bits are off\n");}
    return 0;
}


// Second Method
/* 
bool CheckBit(unsigned int iNo,unsigned int iPos1,unsigned int iPos2)
{
    unsigned int iResult1 = 0, iResult2 = 0, iMask1 = 0X00000001, iMask2 = 0X00000001;
    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        printf("Invalid position\n");
        return false;
    }
    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iResult1 = iMask1 & iNo;
    iResult2 = iMask2 & iNo;
    if((iResult1 == iMask1) && (iResult2 == iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    unsigned int iValue = 0,iPos1 = 0,iPos2 = 0;
    bool iRet = false;

    printf("Enter a number\n");
    scanf("%d",&iValue);
    printf("Enter first position\n");
    scanf("%d",&iPos1);
    printf("Enter second position\n");
    scanf("%d",&iPos2);
    
    iRet = CheckBit(iValue,iPos1,iPos2);
    if(iRet == true)
    {
        printf("Bits are on\n");
    }
    else
    {
        printf("Bit is off \n");
    }
}
*/

// Third Method
/*
bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 0X00000001, iMask2 = 0X00000001, iMask = 0X00000000;
    unsigned int iResult = 0;
    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {  return false;  }

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iMask = iMask1 | iMask2;
    // iResult = iNo & iMask;
    if(iNo == iMask)
    {return true;}
    else
    {return false;}
}
int main()
{
    unsigned int iValue = 0,iPos1 = 0,iPos2 = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter first position\n");
    scanf("%d",&iPos1);
    printf("Enter second position\n");
    scanf("%d",&iPos2);
    bRet = CheckBit(iValue,iPos1,iPos2);
    if(bRet == true)
    {printf("Bits are on\n");}
    else
    {printf("Bits are off\n");}
    return 0;
}*/