//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	//5��������
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("please enter n:");
//		scanf("%d",&n);
//		if (n < 0)
//		{
//			continue;
//		}
//		sum += n;
//		
//	}
//	printf("�������!\n");
//	printf("sum = %d\n",sum);
//
//
//	//���븺������
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	while (1)
//	{
//		printf("please enter n:");
//		scanf("%d",&n);
//		if (n <= 0)
//		{
//			break;
//		}
//		i++;
//		sum = sum + n;
//	}
//	printf("�������!\n");
//	printf("�������%d��������\n",i);
//	printf("�����������ĺ�%d\n",sum);
//
//
//
//	//�����ǳ˷���
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("\t");
//		}
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//
//	//�����ǳ˷���
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//
//	//���γ˷���
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	//ѧ���ɼ�switch
//	int score = 0;
//	scanf("%d",&score);
//	printf("��ѧ�γɼ�Ϊ%d\n",score);
//	switch (score / 10)
//	{
//	case 10:
//	case 9:
//	case 8:
//		printf("���ſγɼ�ΪA��\n");
//		break;
//	case 7:
//		printf("���ſγɼ�ΪB��\n");
//		break;
//	case 6:
//		printf("���ſγɼ�ΪC��\n");
//		break;
//	default:
//		printf("���ſγɼ�ΪD��\n");
//	}
//
//	//if�жϳɼ�
//	int score;
//	scanf("%d",&score);
//	printf("��ѧ�γɼ�Ϊ%d\n",score);
//	if (score >= 70)
//	{
//		if (score >= 80)
//			printf("���ſγɼ�ΪA��\n");
//		else
//			printf("���ſγɼ�ΪB��\n");
//	}
//	else
//	{
//		if (score < 60)
//			printf("���ſγɼ�ΪD��\n");
//		else
//			printf("���ſγɼ�ΪC��\n");
//	}
//		
//
//
//	//��1�����100
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d\n",i);
//	}
//
//
//
//
//	//��1�ӵ�100
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//
//
//
//
//
//
//
//	return 0;
//}