#include <stdio.h>
int main()
{

    int line = 0;
    while (line < 3000)
    { 
        printf("д����:%d\n",line);
        line++;
    }
    if (line == 3000)
    {
        printf("��offer\n");
    }
    return 0;
}