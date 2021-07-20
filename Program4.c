
//////////////////////////////////////////////
//
//  Function Name : Display()
//  Input : 5
//  Output : 1  2  3  4  5 
//  Description : Accept number from user and display all the numbers till that number.
//  Date : 20/07/2021
//  Author : Hrutik Takke
//
/////////////////////////////////////////////

// Accept number from user and display all the numbers till that number.
// Input : 8
// Output : 1   2   3   4   5   6   7   8

// Input : -6
// Output : 1   2   3   4   5   6

/*
    START
        Accept one number as no
        If number is negative then convert it to positive
        Create one counter as Cnt and set it to 1
        
        Iterate till the counter is lessthan or equal to the number
            print the value of counter on screen
            Increment the value of couter by 1
        continue 
    END
*/

// 1    2    3    4    5
//  Start         1
//  end           5
//  Diffrence     1

/*   Hardcoded level la display kele.
    printf("1");
    printf("2");
    printf("3");
    printf("4");
    printf("5");
*/
// 1 Initialization
// 2 Condition
// 3 Increment or decrement factor
// 4 Loop body

#include <stdio.h>
// void Display(void)
// void Display()
// Display is a function which accepts nothing and return nothing.
// Display function accepts one parameter as integer and return nothing.

///////////////////// For loop ////////////////////////
void Display(int iNo)
{
    int iCnt = 0;    // Declaration and Initialisation
    if(iNo ==0)      // Input filter 
    {
        return;      // return 0 kele tar error yeen karan var return type void ahe.
    }
    if(iNo < 0) // Input updator
    {
        iNo = -(iNo);    //mynus la parat mynus kartoy. Hyani ino positive hoen.
    }
    //      1          2          3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);    // 4
    }
    // 1    (2   4   3)   (2   4   3)  ( 2   4   3)   (2   4   3)   (2   4    3)   2    STOP   <- Dryrun kele.
    // Output :  1             2             3             4             5
}
int main()  // Entry point function
{
    int iNo = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;      /* If you want to convey to the operating system that our process execute sucessfull or our
                      process execute abortively then return value of main() should be integer */ 
}

///////////////////// While loop ////////////////////////
/*void display(int no)
{ 
    int ino=1;
    if(no< 0)
     {
        no= -no;
     }   
     while(ino<=no)
      {
        printf("%d\n",ino);
        ino++;
      }  
}
int main()
{
    int ino=0;

    printf("Enter a number\n");
    scanf("%d",&ino);
    display(ino);

}*/

///////////////////// Do While loop //////////////////////
/*void display(int no)
{ 
    int ino=1;
    if(no< 0)
     {
        no= -no;
     }   
      
     do{
         printf("do while %d\n",ino);
         ino++;
       }while(ino<=no);
}
int main()
{
    int ino=0;
    
    printf("Enter a number\n");
    scanf("%d",&ino);
    display(ino);
    return 0;
}*/




