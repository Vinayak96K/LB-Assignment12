#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cVar;
    BOOL bRet=TRUE;
    printf("Enter a character:");
    scanf("%c",&cVar);

    bRet=ChkDigit(cVar);

    if(bRet==TRUE)
    {
        printf("%c is a digit.\n",cVar);
    }
    else if(bRet==FALSE)
    {
        printf("%c is not a digit.\n",cVar);
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}
