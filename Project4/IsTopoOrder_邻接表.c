////�ڽӱ��ʾ��
////adjacency ���ڽӵ�
////onenote�ʼ��м�¼
////�����ڽӱ�������ͼG
////�����һ���и���2������i(0<i��10)��j(j��0)���ֱ�ΪͼG�Ķ������ͱ����� ����ڶ���Ϊ�������Ϣ��ÿ������ֻ����һ���ַ���ʾ�� 
////��������j�У�ÿ������һ���������Ķ��㡣
///*
//9 11
//1 2 3 4 5 6 7 8 9
//0 2
//0 7
//1 2
//1 3
//1 4
//2 3
//3 5
//3 6
//4 5
//7 8
//8 6
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 10//��ඥ����
//typedef int otherinfo;
//typedef int vertices;
//typedef enum { DG, DN, UDG, UDN }GraphyKind;
//typedef struct ArcNode
//{
//	int adjvex;//�ڽӻ��ؼ���Ϣ��ָ��Ķ�����ţ�
//	struct ArcNode* nextarc;//ָֻ����һ������ָ��
//
//}ArcNode;
//typedef struct
//{
//	vertices data;
//	ArcNode* firstarc;
//}VNode, verticesNode;
//typedef struct
//{
//	verticesNode vertices[MAX_VERTEX_NUM];//������ͷ�ڵ��
//	int vexnum, arcnum; //������������
//	GraphyKind kind;
//}ALGraph;
//
//
//int CreateDN(ALGraph* G);//����ͼ
//int Add_Adj_Node(ALGraph* G, int m, int n);//���ӽڵ㵽�ڽӱ�
//int LocateVex_M(ALGraph* G, vertices v);//�ҵ�v2��Ӧ�Ķ���������vertices�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//void print_G(ALGraph* G);//���ͼ���ڽӱ�
//void DFS(ALGraph* G, int i);
//
//int TopoSort(ALGraph* G)
//{
//	int q[MAX_VERTEX_NUM]; int top = -1;//˳��ջ
//	int indegree[MAX_VERTEX_NUM] = { 0 };
//	ArcNode* p;
//	for (int i = 0; i < G->vexnum; i++)//������������
//	{
//		p = G->vertices[i].firstarc;
//		while (p)
//		{
//			indegree[p->adjvex]++;
//			p = p->nextarc;
//		}
//	}
//	for (int i = 0; i < G->vexnum; i++)//�����Ϊ0�Ķ�����ջ
//	{
//		if (indegree[i] == 0) { top++; q[top] = i; }//��ջ
//	}
//	int count = 0;//���������Ŀ������
//	int u;
//	while (top != -1)
//	{
//		u = q[top]; top--;
//		printf(" %d", G->vertices[u].data);
//		count++;
//		p = G->vertices[u].firstarc;
//		while (p)//����u�������ڽӵ���ȼ�һ
//		{
//			indegree[p->adjvex]--;
//			if (indegree[p->adjvex] == 0) { top++; q[top] = p->adjvex; }//��ջ
//			p = p->nextarc;
//		}
//	}
//	printf("\ncount:%d", count);
//	if (count < G->vexnum)return 0;//�л�·
//	else return 1;
//
//
//}
//int IsTopoOreder(ALGraph* G)
//
//{	//���������е�һ��Ԫ�ؿ�ʼ��ÿ����һ����ͰѶ��㼯order�и�
//	//���������ǰ������order[i]��1ȥ���������������order[i]Ϊ0����Υ����
//	// �����������ԣ��������������˳�����0
//	int order[MAX_VERTEX_NUM] = {0};
//	//����Ϊ0��ȥ��Ϊ1
//	int in[MAX_VERTEX_NUM] = { 0 };
//	for (int i = 1; i <= G->vexnum; i++)scanf("%d",&in[i]);//������ж�����
//	ArcNode* p;
//	for (int i = 1; i <= G->vexnum; i++)//�ж�����ͷ�ڵ��Ƿ���ǰ��
//	{
//		p = G->vertices[i].firstarc;
//		while (p)
//		{
//			if (p->adjvex == in[1])
//				return 0;//������п�ʼ�ڵ���ǰ������һ��������������
//			p = p->nextarc;
//		}
//	}
//	for (int i = 1; i <= G->vexnum; i++)//��������±�
//	{
//		if (order[in[i]] == 1)
//		{
//			return 0;
//		}
//		for (int j = 1; j <= G->vexnum; j++)//�ڲ���ǰ��������vertices����
//		{
//			p = G->vertices[j].firstarc;
//			while (p)
//			{
//				if (p->adjvex == in[i]) 
//					order[j] = 1;
//				p = p->nextarc;
//			}
//		}
//
//	
//	}
//
//
//	return 1;
//
//}
//int CreateDN(ALGraph* G)//����ͼ
//{
//	int i, j, k, weight;
//	int m, n;
//	vertices v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//���붥����������;
//	//getchar();//���Ļس�
//	for (i = 1; i <= G->vexnum; i++)
//	{
//		//scanf("%d", &G->vertices[i].data);//�����ͷ�ڵ��
//		G->vertices[i].firstarc = NULL;
//	}
//	for (i = 1; i <= G->arcnum; i++)
//	{
//		scanf("%d %d", &v1, &v2);
//		//m=LocateVex_M(G, v1);
//		//n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, v1, v2);//ֱ�Ӷ�Ӧ�±꣬����Ҫ����locate����,�±��0��ʼ
//		//Add_Adj_Node(G, n, m);//ע�⣬����ͼ��a��b��bҲҪ��a
//	}
//}
//
//
//int Add_Adj_Node(ALGraph* G, int m, int n)//���ӽڵ㵽�ڽӱ�
//{//v��ʾ�ڼ����ڵ㣬c��ʾҪ���ӵĽڵ�ؼ���ֵ
//	if (G->vertices[m].firstarc == NULL)
//	{
//		ArcNode* NewNode = (verticesNode*)malloc(sizeof(verticesNode));
//		NewNode->adjvex = n;
//		NewNode->nextarc = NULL;
//		G->vertices[m].firstarc = NewNode;
//	}
//	else
//	{
//		ArcNode* NewNode = (verticesNode*)malloc(sizeof(verticesNode));
//		ArcNode* temp = (verticesNode*)malloc(sizeof(verticesNode));
//		NewNode->adjvex = n;
//		temp = G->vertices[m].firstarc;
//		G->vertices[m].firstarc = NewNode;
//		NewNode->nextarc = temp;
//	}
//}
//int LocateVex_M(ALGraph* G, vertices v)//�ҵ�v2��Ӧ�Ķ���������vertices�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertices[i].data) return i;
//		else;
//	}
//
//}
//
//int main(void)
//{
//	int v;
//	ALGraph G;
//	CreateDN(&G);////����ͼ,AOV��
//	//scanf("%d", &v);
//	//printf("DFS from %d:", v);
//	//DFS(&G, v);
//	//TopoSort(&G);
//	int num;
//	scanf("%d",&num);
//	for (int i = 0; i < num; i++)
//	{
//		IsTopoOreder(&G) ? printf("yes") : printf("no");
//		if(i<num-1)printf("\n");
//	}
//	
//	return 0;
//}
//
////bool IsTopSeq(LGraph Graph, Vertex Seq[]) {
////	int a[1000];//��������ڵ��Ƿ������������
////	for (int i = 0; i < 1000; i++)
////		a[i] = 0;//��ʼ��Ϊ0.�����ڵ㶼û�����
////	PtrToAdjVNode p;
////	for (int i = 0; i < Graph->Nv; i++)//�������������
////	{
////		Seq[i]--;//�ؼ��㣡�����������ϱߵķ�������Ҫ�жϵ�����ÿ��������1
////		for (int j = 0; j < Graph->Nv; j++) //����ͼ���ڽ�����
////		{
////			if (a[j] == 1 || j == Seq[i])//�����ǰ�ڵ�����������ߺ�Ҫ�жϵ����нڵ���ͬ���������Ҹ�����Ϊ���ܽ�ʡ��ʱ��ɡ��ٺ�
////				continue;
////			else
////			{
////				p = Graph->G[j].FirstEdge;
////				while (p)
////				{
////					if (p->AdjV == Seq[i])
////						return false;
////					p = p->Next;
////				}
////			}
////		}
////		a[Seq[i]] = 1;
////	}
////	return true;
////}
////
