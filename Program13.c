
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Fact
//  Input : Integer
//  Output : Integer
//  Description : Accept number from user and return its factorial.
//  Date : 21/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////

// Q. Accept number from user and return its factorial
// Input : 5
// Output : 5*4*3*2*1       (120)

// Input :4
// Output : 4*3*2*1  or 1*2*3*4     (24)

# include<stdio.h>
int Fact(int iNo)
{
    int iMult = 1;    //1
    if(iNo < 0)
    {   iNo = -iNo; }

    while(iNo > 0)   //2
    {
        iMult = iMult * iNo; //4
        iNo--;       //3
    }
    return iMult;   // 1   2 4 3   2 4 3   2 4 3   2 End
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Fact(iValue);
    printf("Result is : %d\n",iRet);
    return 0;
}
