////邻接矩阵表示法创建有向图
// //onenote笔记有记录
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MaxVertexNum 20
//#define INFINITY 32768
//typedef int VertexData;
//typedef int AdjType;
//typedef int otherinfo;
//typedef int Vertex;/* 用顶点下标表示顶点,为整型 */
////图的种类：DG表示有向图，DN表示有向网，UDG表示无向图，UDN表示无向网
//typedef enum {DG,DN,UDG,UDN}GraphyKind;
//typedef struct ArcNode
//{
//	AdjType adj;
//	otherinfo info;
//}ArcNode;
//typedef struct
//{
//	VertexData vertex[MaxVertexNum];//顶点向量,存储顶点数据
//	ArcNode arcs[MaxVertexNum][MaxVertexNum];//邻接矩阵，存储边，即顶点间的邻接关系
//	int vexnum, arcnum; //顶点数，边数
//	GraphyKind kind;
//}MGraph;
//int visited[MaxVertexNum]; /* 顶点的访问标记 */
///*
//* //0 3 4 1 2 5 666代表节点值，
////下面的一对一对值代表有边相连的两个节点的值
////若需要采用下表对应输入，即下面的一对一对值代表
////有边相连的两个节点的对应下标除了确保这些对值在
////下标范围内外，还需要修改DFS或者BFS中的printf输出:
////将printf(" %d", G->vertex[v]);修改为：printf(" %d",v);
////将printf(" %d", G->vertex[i]);修改为：printf(" %d",i);
//7 9
//0 3 4 1 2 5 666
//0 4
//0 2
//3 2
//0 3
//3 1
//4 5
//666 5
//2 5
//1 5
//5
//*/
//int CreateDN(MGraph* G)
//{
//	int i, j, k, weight;
//	VertexData v1, v2;
//	scanf("%d %d", &G->vexnum ,&G->arcnum);//读入顶点数，边数;
//	for (i = 0; i < MaxVertexNum; i++)
//		for (j = 0; j < MaxVertexNum; j++)
//			G->arcs[i][j].adj = INFINITY;
//	for (i = 0; i < G->vexnum; i++)
//		scanf("%d",&G->vertex[i]);//读入顶点
//	for (k = 0; k < G->arcnum; k++)//读入边的数据
//	{
//		scanf("%d %d",&v1,&v2);//读入边的两个顶点和权值，如果不需要权值则删除掉即可
//		i = LocateVex_M(G,v1);
//		j = LocateVex_M(G, v2);
//		G->arcs[j][i].adj = 1;
//		G->arcs[i][j].adj = 1;//注意，无向图，a连b，b也要连a
//	}
//	for (i = 0; i < MaxVertexNum; i++)visited[i] = 0;
//}
//void BFS(MGraph* G, Vertex v)//BFS广度优先搜索遍历
//{
//	int q[MaxVertexNum]; int front = 0, rear = 0;//队头在前端，队尾在后端
//	visited[v]=1;
//	printf(" %d", G->vertex[v]);
//	q[rear++] = v;//入队
//	while (front != rear)
//	{
//		int now = q[front++];//出队
//		for (int i = 0; i < G->vexnum; i++)
//		{
//			if (G->arcs[now][i].adj == 1 && visited[i] == 0)
//			{
//				printf(" %d", G->vertex[i]);
//				visited[i] = 1;
//				q[rear++] = i;//入队
//			}
//		
//		
//		}
//	
//	
//	
//	}
//
//
//
//}
//int LocateVex_M(MGraph* G, VertexData v)//找到v2对应的顶点数据在vertex数组中的序号i或j，对应的就是在图中的位置
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertex[i]) return i;
//		else ;
//	}
//
//}
//void print_G(MGraph* G)//输出图的邻接矩阵
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
//int main()
//{
//	Vertex v;
//	MGraph G;
//	CreateDN(&G);
//	scanf("%d", &v);
//	printf("BFS from %d:", v);
//	BFS(&G, v);
//	return 0;
//}