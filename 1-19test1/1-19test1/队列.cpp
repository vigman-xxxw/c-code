//˳������

int main()
{
	int queue[10];
	int front = 0;
	int rear = 0;
	int x;

	//��� ��Ȧ
	rear = (rear + 1) % 10;
	queue[rear] = x;
	//���� ��Ȧ
	front = (front + 1) % 10;
	x = queue[front];

	//�п�
	if(front == rear) //�ӿ�
	
	if (front == (rear+1)%10) //����

	return 0;
}