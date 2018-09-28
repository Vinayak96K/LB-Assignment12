#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayASCII
//  Description: Displays the ASCII table with columns Binary, Hexadecimal and Ocatl number of the corresponding character.
//  Input: NA
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i=0;
    printf("---------------------------------------ASCII TABLE---------------------------------------------\n");
    printf("Binary\tCharacter\tHexadecimal\tOctal Number\n");
    for(i=0;i<256;i++)
    {
        printf("%d\t%c\t%x\t%o\n",i,i,i,i);
    }
}