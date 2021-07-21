
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Factors
//  Input : Integer
//  Output : Void
//  Description : Accept number and display factors of that number.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////

// Accept number and display factors of that number.
// Input : 6
// Output : 1   2   3   6

// if (6 % 1) == 0          1
// if (6 % 2) == 0          2
// if (6 % 3) == 0          3

// Time complexity is nothing but apla loop kiti vela firto.
//  Time Complexity : O(N)  
//  O -> order of N , N -> Input 

# include<stdio.h>
void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {  iNo = -iNo;  }
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
// Time Complexity : O(N/2)   <- BigO notation ahe

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    Factors(iValue);
    
    return 0;
}
