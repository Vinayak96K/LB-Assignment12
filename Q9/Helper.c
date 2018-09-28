#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ChkSpecial
//  Description: Accepts a character and returns true if it is a special symbol otherwise it returns false.
//  Input: char[IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(ch=='\0')
    {
        return ERR;
    }

    if((ch>=33 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=255))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}