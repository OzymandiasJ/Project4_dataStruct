////邻接表表示法
////adjacency ：邻接的
////onenote笔记有记录
////采用邻接表创建无向图G
////输入第一行中给出2个整数i(0<i≤10)，j(j≥0)，分别为图G的顶点数和边数。 输入第二行为顶点的信息，每个顶点只能用一个字符表示。 
////依次输入j行，每行输入一条边依附的顶点。
///*
//5 7
//ABCDE
//AB
//AD
//BC
//BE
//CD
//CE
//DE
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 20//最多顶点数
//typedef int otherinfo;
//typedef char VertexData;
//typedef enum { DG, DN, UDG, UDN }GraphyKind;
//typedef struct ArcNode
//{
//	int adjvex;//邻接弧关键信息（指向的顶点序号）
//	struct ArcNode* nextarc;//只指向下一条弧的指针
//	otherinfo info;
//}ArcNode;
//typedef struct 
//{
//	VertexData data;
//	ArcNode* firstarc;
//}VertexNode;
//typedef struct
//{
//	VertexNode vertex[MAX_VERTEX_NUM];//创建表头节点表
//	int vexnum, arcnum; //顶点数，边数
//	GraphyKind kind;
//}AdjList;
//
//
//int CreateUDN(AdjList* G);
//int Add_Adj_Node(AdjList* G, int m, int n);//增加节点到邻接表
//int LocateVex_M(AdjList* G, VertexData v);//找到v2对应的顶点数据在vertex数组中的序号i或j，对应的就是在图中的位置
//void print_G(AdjList* G);//输出图的邻接表
//
//
//
//int CreateUDN(AdjList*G)
//{
//	int i, j, k, weight;
//	int m, n;
//	VertexData v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//读入顶点数，边数;
//	getchar();//消耗回车
//	for (i = 0; i < G->vexnum; i++)
//	{
//		scanf("%c", &G->vertex[i].data);//读入表头节点表
//		G->vertex[i].firstarc = NULL;
//	}
//	getchar();//消耗回车
//	for (i = 0; i < G->arcnum; i++)
//	{
//		scanf("%c%c",&v1,&v2);
//		getchar();//消耗回车
//		m=LocateVex_M(G, v1);
//		n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, m, n);
//	}
//}
//int Count_Degree(AdjList* G)//计算图每个节点的度
//{
//	int i, j;
//	int sum[MAX_VERTEX_NUM] = {0};
//	ArcNode* temp = (VertexNode*)malloc(sizeof(VertexNode));
//	
//	for (i = 0; i < G->vexnum; i++)
//	{
//			temp = G->vertex[i].firstarc;
//			if (G->vertex[i].firstarc == NULL) {}
//			else 
//			{
//
//				while (1)//计算出度
//				{
//					sum[i]++;
//					temp = temp->nextarc;
//					if (temp == NULL) break;
//				}
//			}
//
//			for (j = 0; j < G->vexnum; j++)//计算入度
//			{
//				if (j == i)break;//避免重复计算
//			
//				temp = G->vertex[j].firstarc;
//				if (temp== NULL)continue;
//				else
//				{
//					while (1)//计算出度
//					{
//						if (temp->adjvex == i)sum[i]++;
//						temp = temp->nextarc;
//						if (temp == NULL)break;
//					}
//				}
//			}
//	}
//	for (i = 0; i < G->vexnum;i++)printf("%d ",sum[i]);
//
//}
//int Add_Adj_Node(AdjList* G, int m, int n)//增加节点到邻接表
//{//v表示第几个节点，c表示要增加的节点关键字值
//	if (G->vertex[m].firstarc == NULL)
//	{
//		ArcNode* NewNode = (VertexNode*)malloc(sizeof(VertexNode));
//		NewNode->adjvex = n;
//		NewNode->nextarc = NULL;
//		G->vertex[m].firstarc = NewNode;
//	}
//	else
//	{
//		ArcNode* NewNode = (VertexNode*)malloc(sizeof(VertexNode));
//		ArcNode* temp = (VertexNode*)malloc(sizeof(VertexNode));
//		NewNode->adjvex = n;
//		temp = G->vertex[m].firstarc;
//		G->vertex[m].firstarc = NewNode;
//		NewNode->nextarc = temp;
//	}
//}
//int LocateVex_M(AdjList* G, VertexData v)//找到v2对应的顶点数据在vertex数组中的序号i或j，对应的就是在图中的位置
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertex[i].data) return i;
//		else;
//	}
//
//}
//
//int main(void)
//{
//	AdjList* G = (AdjList*)malloc(sizeof(AdjList));
//	CreateUDN(G);
//	Count_Degree(G);
//	return 0;
//}