#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplaySchedule
//  Description: Accepts a character as division of schedule and display the exam time according to the division.
//  Input: char[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if(ch=='\0')
    {
        printf("Invalid input!\n");
        return;
    }

    if(ch=='A'||ch=='a')
    {
        printf("Exam time is 7 AM\n");
    }
    else if(ch=='B'||ch=='b')
    {
        printf("Exam time is 8:30 AM\n");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("Exam time is 9:20 AM\n");
    }
    else if(ch=='D'||ch=='d')
    {
        printf("Exam time is 10:30 AM\n");
    }
    else
    {
        printf("Incorrect division!\n");
    }
}