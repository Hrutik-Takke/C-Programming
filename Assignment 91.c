
/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : RangeSum
//  Input: Integer, Integer
//  Output: Integer
//  Description : Write a program which accept range from user and return addition of all numbers in between that range.
//               (Range should contains positive numbers only) 
//  Date: 02/09/2021
//  Author: Hritik Takke
//
///////////////////////////////////////////////////////////////////////////////
 
 
  
Input :  	23 	30  
Output :  212  	  

Input :  	10 	18 
Output :  126 

Input :  	-10 2 
Output :  Invalid range 

Input :  	90 	18 
Output :  Invalid range 


#include<stdio.h>
#include<stdlib.h> 
int RangeSum(int iStart , int iEnd) 
{ 
	int iSum = 0;
   if((iStart > iEnd) || (iStart < 0))
   {
   	 printf("Invalid Input");
   	 exit(0);
   }
    
   for(   ; iStart <= iEnd; iStart ++)
   {
      iSum = iSum + iStart;
   }
  //return iSum;
} 
int main() 
{ 
 	int iValue1 = 0, iValue2 = 0, iRet =0; 
 	printf("Enter starting point ");  	
 	scanf("%d",&iValue1); 
 	printf("Enter ending point ");  	
 	scanf("%d",&iValue2);  	
 	
 	iRet = RangeSum(iValue1, iValue2);  	
 	printf("Addition is %d",iRet); 
 	return 0; 
}