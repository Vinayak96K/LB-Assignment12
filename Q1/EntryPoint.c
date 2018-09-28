#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cVar;
    BOOL bRet=TRUE;
    printf("Enter a character:");
    scanf("%c",&cVar);

    bRet=ChkAlpa(cVar);

    if(bRet==TRUE)
    {
        printf("%c is an alphabet.\n",cVar);
    }
    else if(bRet==FALSE)
    {
        printf("%c is not an alphabet.\n",cVar);
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}
