#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

    int a = 0;
    printf("�������;>\n");
    printf("Ҫ��Ҫ�ú�ѧϰ?>(1/0)");
    scanf("%d", &a);
    if (a ==1)
        printf("�õ���offer\n");
    else
        printf("�ؼ�������\n");



    return 0;
}