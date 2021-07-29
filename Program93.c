
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Reverse
//  Input : Character[]
//  Output : void
//  Description :  Accept the string from user and reverse the string. 
//  Date : 29/07/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

// Q. String reverse kartoy.(Inplace reverse code)
#include<stdio.h>

void Reverse(char str[])
{
    char *start, *end;
    char temp;

    if(str == NULL)
    {  return;  }
    start = str;   // 100
    end = str;     // 100
    while(*end != '\0')  // for(; *end != '\0'; end++);
    {
        end++;
    }
    end--;  // 105
    while(start < end)  // 100 < 105
    {
        temp = *start;  
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[10];
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    Reverse(Arr);
    printf("Reverse string is : %s\n",Arr);  // Orignal string reverse kele.
    return 0;
}

/* --------- Method 2 -------------
void Reverse(char str[])
{   
    int End = 0, Start = 0, Mid = 0;
    char Temp = '\0';

    while(str[End] != '\0')
    {
        End++;
    }
     End--;
     Mid = (End)/2;
    while( End > Mid)
    {
       Temp = str[Start];
       str[Start] = str[End];
       str[End] = Temp;
       End--;
       Start++;
    }
}
int main()
{
    char Arr[10];
    printf("Enter the string ");
    scanf("%[^'\n']s",Arr);
    Reverse(Arr);
    printf("%s\n",Arr );
    return 0;
}
*/
/*-------------------------------------------------
 #include<iostream>
using namespace std;

class StringX
{
 public:
    char *start,*End,Temp = '\0';
 public:
    void Display(char *p)
    { 
      start = p;
      while(*p != '\0')
      {
        p++;
      }
      p--;
      while(start < p)
      {
        Temp = *start;
        *start = *p;
        *p = Temp;
        p--;
        start++;
      }
    }
};
int main()
{
  char str[10];
  cout<<"Enter your first name ";
  scanf("%[^'\n']s",str);

  StringX obj;
  //obj.Accept();
  obj.Display(str);
  cout<<"Count of Alphabets "<<str;
  return 0;
}
*/