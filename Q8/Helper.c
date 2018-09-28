#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Dispaly
//  Description: Accepts a character and displays all the aplphabet till Z or z if the input is an aplhabet.
//  Input: char[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCn1=0,iCn2=0;
    if(ch=='\0')
    {
        printf("Invalid input!\n");
        return;
    }

    if(ch>='A' && ch<='z')
    {
        if(ch>='A' && ch<='Z')
        {
            iCn2=90;
            iCn1=ch;
            while(iCn1<=iCn2)
            {
                printf("%c\t",iCn1);
                iCn1++;
            }
            printf("\n");
        }
        else
        {
            iCn2=122;
            iCn1=ch;
            while(iCn1<=iCn2)
            {
                printf("%c\t",iCn1);
                iCn1++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }

}