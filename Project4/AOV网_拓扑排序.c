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
//}VNode,verticesNode;
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
//	int q[MAX_VERTEX_NUM] ; int top = -1;//˳��ջ
//	int indegree[MAX_VERTEX_NUM] = {0};
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
//		printf(" %d",G->vertices[u].data);
//		count++;
//		p = G->vertices[u].firstarc;
//		while (p)//����u�������ڽӵ���ȼ�һ
//		{
//			indegree[p->adjvex]--;
//			if (indegree[p->adjvex] == 0) { top++; q[top] = p->adjvex;  }//��ջ
//			p = p->nextarc;
//		}
//	}
//	printf("\ncount:%d",count);
//	if (count < G->vexnum)return 0;//�л�·
//	else return 1;
//
//
//}
//int CreateDN(ALGraph*G)//����ͼ
//{
//	int i, j, k, weight;
//	int m, n;
//	vertices v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//���붥����������;
//	//getchar();//���Ļس�
//	for (i = 0; i < G->vexnum; i++)
//	{
//		scanf("%d", &G->vertices[i].data);//�����ͷ�ڵ��
//		G->vertices[i].firstarc = NULL;
//	}
//	for (i = 0; i < G->arcnum; i++)
//	{
//		scanf("%d %d",&v1,&v2);
//		//m=LocateVex_M(G, v1);
//		//n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, v1, v2);//ֱ�Ӷ�Ӧ�±꣬����Ҫ����locate����
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
//	TopoSort(&G);
//	return 0;
// }
