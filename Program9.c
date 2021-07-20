

////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckResult
//  Input : Integer
//  Output : Fail, Pass class, Second class, Fisrt class, Distinction.
//  Description : It is used to check result(class).
//  Date : 20/07/2021
//  Author : Hrutik Takke
//
////////////////////////////////////////////////////////////////////////////
# include<stdio.h>
/*
    0 to 35         Fail
    35 to 50       Pass class
    50 to 60       Second class
    60 to 70       Fisrt class
    70 to 100     Distinction
 */
void CheckResult(int iMarks)
{
    if((iMarks < 0) || (iMarks > 100))  // Input filter
    {
        printf("Invalid marks\n");
        return;                        // manje pudh janar nahi
    }
    if((iMarks >= 0) && (iMarks < 35))
    {   
        printf("You are failed..\n");
    }
    else if((iMarks >= 35) && (iMarks < 50))
    {  
        printf("Pass class\n");
    }
    else if((iMarks >= 50) && (iMarks <60))
    {  
        printf("Second class\n");
    }
    else if((iMarks >=60) && (iMarks < 70))
    {   
        printf("First class\n");
    }
    else
    {   
        printf("Distinction\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter your marks\n");
    scanf("%d",&iValue);
    CheckResult(iValue);
    return 0;
}
