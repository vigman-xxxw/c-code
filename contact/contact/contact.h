#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
//ͷ�ļ�
#include <string.h>
#include <stdio.h>


//����
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


#define MAX 1000

//���͵Ķ���
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;  //��struct PeoInfo  ��дΪ PeoInfo 

typedef struct Contact
{
	//����ͨѶ¼
	PeoInfo data[MAX];
	int sz;
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);


//������ϵ��
void AddContact(Contact* pc);


//��ӡͨѶ¼��Ϣ
void PrintContact(const Contact* pc);