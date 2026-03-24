#include<stdio.h>

int main()
{
    char  str[80];
    char  Command[4][20];
    int iRet = 0;

    iRet = sscanf(str,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);

    printf("Return value in scanf  : %d\n",iRet);

    printf("%s\n",Command[0]);
    printf("%s\n",Command[1]);
    printf("%s\n",Command[2]);
    printf("%s\n",Command[3]);

    return 0;
}
