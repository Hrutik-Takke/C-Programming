
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Diffrence
//  Input : Integer
//  Output : Integer
//  Description : Accept number from user and return the difference between Factor and Nonfactor.
//  Date : 23/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

//
// 10
// 18 - 37          (1 + 2 + 5 + 10)- (3 + 4 + 6 + 7 + 8 + 9)
// -19

#include<stdio.h>
#include<stdlib.h>
int Diffrence(int iNo)
{
    int i= 0,Fact = 0,Nonfact = 0;
    if ( iNo == 0 )
    {
        printf(" Invalid Input\n");
        exit(0);
    }
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<= iNo; i++ )
    {
        if((iNo % i) == 0)
        {
            Fact = Fact + i;
        }
        else
        {
            Nonfact = Nonfact + i;
        }
    }
    return Fact - Nonfact; 
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Diffrence(iValue);
        
    printf("Diffrence is : %d\n",iRet);
    return 0;
}
