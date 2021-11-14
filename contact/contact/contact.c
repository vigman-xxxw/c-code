#include "contact.h"

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
	printf("�����Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����绰");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�����ַ");
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