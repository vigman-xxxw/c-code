#include "contact.h"
static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}

	}
	return -1;  //�Ҳ���
}



void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data,0,sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����");
		return;
	}
	// ����һ���˵���Ϣ
	printf("��������;>");
	scanf("%s", pc->data[pc->sz].name);
	printf("��������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�����Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�����ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%20s\t %5s\t %5s\t %12s\t %20s\n","name","age","sex","tele","addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%20s\t %5d\t %5s\t %12s\t %20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr   );

	}

}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��,����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s",name);
	//����
	int pos = FindByName(pc, name);
	//yes/no
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{      //ɾ��
		int i = 0;
		for (i = pos; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
	

}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		int i = 0;
		//��ӡ����
		printf("%20s\t %5s\t %5s\t %12s\t %20s\n", "name", "age", "sex", "tele", "addr");
		
		
		printf("%20s\t %5d\t %5s\t %12s\t %20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);

		
	}
		
		
}


void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	//����
	int pos = FindByName(pc, name);
	//yes/no
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{      //�޸�
		// ����һ���˵���Ϣ
		printf("��������;>");
		scanf("%s", pc->data[pos].name);
		printf("��������:>");
		scanf("%d", &pc->data[pos].age);
		printf("�����Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("����绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�����ַ;>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}

}
