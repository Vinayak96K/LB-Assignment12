#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cVar1,cVar2;

    printf("Enter first character:");
    scanf("%c",&cVar1);
    //fflush(stdin);
    printf("Enter second character:");
    scanf("\n%c",&cVar2);
    printf("Values before SwapX():\n%c\t%c\n",cVar1,cVar2);
    SwapX(&cVar1,&cVar2);
    printf("Values after SwapX():\n%c\t%c\n",cVar1,cVar2);

    return 0;
}
