////�ڽӾ����ʾ��
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 20
//#define INFINITY 32768
//typedef char VertexData;
//typedef int AdjType;
//typedef int otherinfo;
////ͼ�����ࣺDG��ʾ����ͼ��DN��ʾ��������UDG��ʾ����ͼ��UDN��ʾ������
//typedef enum {DG,DN,UDG,UDN}GraphyKind;
//typedef struct ArcNode
//{
//	AdjType adj;
//	otherinfo info;
//}ArcNode;
//typedef struct
//{
//	VertexData vertex[MAX_VERTEX_NUM];//��������,�洢��������
//	ArcNode arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];//�ڽӾ��󣬴洢�ߣ����������ڽӹ�ϵ
//	int vexnum, arcnum; //������������
//	GraphyKind kind;
//
//}AdjMatrix;
//
////6 10   2 1 5   4 1 7   3 2 4    1 3 8    6 3 9    3 4 5     6 4 6     4 5 5    1 6 2     5 6 1
//
//int CreateDN(AdjMatrix* G)
//{
//	int i, j, k, weight;
//	VertexData v1, v2;
//	scanf("%d %d",&G->arcnum,&G->vexnum);//���붥����������;
//	for (i = 0; i < G->vexnum; i++)
//		for (j = 0; j < G->vexnum; j++)
//			G->arcs[i][j].adj = INFINITY;
//	for (i = 0; i < G->vexnum; i++)
//		scanf("%c",&G->vertex[i]);//���붥��
//	for (k = 0; k < G->arcnum; k++)//����ߵ�����
//	{
//		scanf("%d %d %d",&v1,&v2,&weight);//����ߵ����������Ȩֵ���������ҪȨֵ��ɾ��������
//		i = LocateVex_M(G,v1);
//		j = LocateVex_M(G, v2);
//		G->arcs[i][j].adj = weight;
//	}
//	
//
//}
//int LocateVex_M(AdjMatrix* G, VertexData v)//�ҵ�v2��Ӧ�Ķ���������vertex�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//{
//	int i, j;
//	for (i = 0; i < G->arcnum; i++)
//	{
//		if (v == G->vertex[i]) return i;
//		else printf("ERROR,no such data!!!");
//	}
//
//}
//void print_G(AdjMatrix* G)
//{
//	int i, j;
//	for (i = 0; i < G->arcnum; i++)
//	{
//		for (j = 0; j < G->arcnum; j++)
//		{
//			if (G->arcs[i][j].adj == INFINITY)printf("  ");
//			else printf("%d", G->arcs[i][j].adj);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	AdjMatrix* G =(AdjMatrix*)malloc(sizeof(AdjMatrix));
//	CreateDN(G);
//	print_G(G);
//
//
//
//
//
//
//
//
//	return 0;
//}