////�ڽӾ����ʾ����������ͼ
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 20
//#define INFINITY 32768
//typedef int VertexData;
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
//}AdjMatrix;
//
////6 10  1 2 3 4 5 6   2 1 5   4 1 7   3 2 4    1 3 8    6 3 9    3 4 5     6 4 6     4 5 5    1 6 2     5 6 1
//int CreateDN(AdjMatrix* G)
//{
//	int i, j, k, weight;
//	VertexData v1, v2;
//	scanf("%d %d", &G->vexnum ,&G->arcnum);//���붥����������;
//	for (i = 0; i < MAX_VERTEX_NUM; i++)
//		for (j = 0; j < MAX_VERTEX_NUM; j++)
//			G->arcs[i][j].adj = INFINITY;
//	for (i = 0; i < G->vexnum; i++)
//		scanf("%d",&G->vertex[i]);//���붥��
//	for (k = 0; k < G->arcnum; k++)//����ߵ�����
//	{
//		scanf("%d %d %d",&v1,&v2,&weight);//����ߵ����������Ȩֵ���������ҪȨֵ��ɾ��������
//		i = LocateVex_M(G,v1);
//		j = LocateVex_M(G, v2);
//		G->arcs[j][i].adj = weight;
//	}
//	
//
//}
//int LocateVex_M(AdjMatrix* G, VertexData v)//�ҵ�v2��Ӧ�Ķ���������vertex�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertex[i]) return i;
//		else ;
//	}
//
//}
//void print_G(AdjMatrix* G)//���ͼ���ڽӾ���
//{
//	int i, j;
//	printf(" ");
//	for (i = 0; i < G->vexnum; i++)printf("--");
//	printf("\n");
//	for (i = 0; i < G->vexnum; i++)
//	{
//		printf("|");
//		for (j = 0; j < G->vexnum; j++)
//		{
//			if (G->arcs[i][j].adj >= INFINITY)printf("  ");
//			else printf("%d ", G->arcs[i][j].adj);
//		}
//		printf("|");
//		printf("\n");
//	}
//	printf(" ");
//	for (i = 0; i < G->vexnum; i++)printf("--");
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