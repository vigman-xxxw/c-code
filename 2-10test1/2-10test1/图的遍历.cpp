void DFS(int v, AGraph* G)
{
	visit[v] = 1; //���Ϊ �Ѿ�����
	Visit(v);  //�ж��ظ�����
	ArcNode* q = G->adjLIst[v].first;  //��
	while (q != NULL)
	{
		if (visit[q->adjV] == 0)
		{
			DFS(q->adjV, G); //�ݹ�
		}
		q = q->next;
	}
}