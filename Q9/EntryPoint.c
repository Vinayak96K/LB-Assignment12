#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cVar;
    BOOL bRet=TRUE;
    printf("Enter a character:");
    scanf("%c",&cVar);

    bRet=ChkSpecial(cVar);

    if(bRet==TRUE)
    {
        printf("%c is a special symbol.\n",cVar);
    }
    else if(bRet==FALSE)
    {
        printf("%c is not a special symbol.\n",cVar);
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}
