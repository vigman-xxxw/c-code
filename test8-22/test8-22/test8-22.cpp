

#include <stdio.h>
#include <string.h>

int main()
{


    
    char arr1[] = "abc";     //Ĭ���и�\0��Ϊ������־
    char arr2[] = { 'a','b','c' };     //������ֶ����\0,�ͻ������ڴ����ó�����

    //���ַ�������
    int len = strlen("abc");      //string length   ��Ҫ����ͷ�ļ�   ���㳤�ȵ�ʱ�򲻰���\0
    printf("%d\n", len);

    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));

    printf("%s\n", arr1);
    printf("%s\n", arr2);
    return 0;
}