#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SwapX
//  Description: Accepts two base addresses of two characters and swap the content if both are capital. 
//  Input: char[IN-OUT,IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SwapX(char *p,char *q)
{
    char cTemp;
    if((NULL==p)||(NULL==q))
    {
        printf("Invalid input!\n");
        return;
    }

    if((*p>='A' && *p<='Z') &&(*q>='A'&&*q<='Z'))
    {
        cTemp=*p;
        *p=*q;
        *q=cTemp;
    }
}