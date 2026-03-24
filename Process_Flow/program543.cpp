#include<stdio.h>

int main()
{
    char str[80] = {'\0'};
    char Command[4][20] = {{'\0'},{'\0'},{'\0'},{'\0'}};
    int iRet = 0;

    printf("Marvellous CVFS > ");
    fgets(str,sizeof(str),stdin);

    iRet = sscanf(str,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);

    if(iRet == 1)
    {

    }
    else if(iRet == 2)
    {

    }
    else if(iRet == 3)
    {

    }
    else if(iRet == 4)
    {
        
    }
    
    return 0;
}