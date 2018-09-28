#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Display
//  Description: Accepts a character and displays its corresponding decimal number, octal number and hexadecimal number from the ASCII table.
//  Input: char[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch=='\0')
    {
        printf("Invalid input!\n");
        return;
    }

    printf("Character: %c\n",ch);
    printf("Decimal: %d\n",ch);
    printf("Hexadecimal: %x\n",ch);
    printf("Octal: 0%o\n",ch);

}