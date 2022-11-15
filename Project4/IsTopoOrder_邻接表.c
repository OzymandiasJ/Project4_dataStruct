////邻接表表示法
////adjacency ：邻接的
////onenote笔记有记录
////采用邻接表创建无向图G
////输入第一行中给出2个整数i(0<i≤10)，j(j≥0)，分别为图G的顶点数和边数。 输入第二行为顶点的信息，每个顶点只能用一个字符表示。 
////依次输入j行，每行输入一条边依附的顶点。
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
//#define MAX_VERTEX_NUM 10//最多顶点数
//typedef int otherinfo;
//typedef int vertices;
//typedef enum { DG, DN, UDG, UDN }GraphyKind;
//typedef struct ArcNode
//{
//	int adjvex;//邻接弧关键信息（指向的顶点序号）
//	struct ArcNode* nextarc;//只指向下一条弧的指针
//
//}ArcNode;
//typedef struct
//{
//	vertices data;
//	ArcNode* firstarc;
//}VNode, verticesNode;
//typedef struct
//{
//	verticesNode vertices[MAX_VERTEX_NUM];//创建表头节点表
//	int vexnum, arcnum; //顶点数，边数
//	GraphyKind kind;
//}ALGraph;
//
//
//int CreateDN(ALGraph* G);//有向图
//int Add_Adj_Node(ALGraph* G, int m, int n);//增加节点到邻接表
//int LocateVex_M(ALGraph* G, vertices v);//找到v2对应的顶点数据在vertices数组中的序号i或j，对应的就是在图中的位置
//void print_G(ALGraph* G);//输出图的邻接表
//void DFS(ALGraph* G, int i);
//
//int TopoSort(ALGraph* G)
//{
//	int q[MAX_VERTEX_NUM]; int top = -1;//顺序栈
//	int indegree[MAX_VERTEX_NUM] = { 0 };
//	ArcNode* p;
//	for (int i = 0; i < G->vexnum; i++)//求各个顶点入度
//	{
//		p = G->vertices[i].firstarc;
//		while (p)
//		{
//			indegree[p->adjvex]++;
//			p = p->nextarc;
//		}
//	}
//	for (int i = 0; i < G->vexnum; i++)//将入度为0的顶点入栈
//	{
//		if (indegree[i] == 0) { top++; q[top] = i; }//入栈
//	}
//	int count = 0;//输出顶点数目计数器
//	int u;
//	while (top != -1)
//	{
//		u = q[top]; top--;
//		printf(" %d", G->vertices[u].data);
//		count++;
//		p = G->vertices[u].firstarc;
//		while (p)//顶点u的所有邻接点入度减一
//		{
//			indegree[p->adjvex]--;
//			if (indegree[p->adjvex] == 0) { top++; q[top] = p->adjvex; }//入栈
//			p = p->nextarc;
//		}
//	}
//	printf("\ncount:%d", count);
//	if (count < G->vexnum)return 0;//有回路
//	else return 1;
//
//
//}
//int IsTopoOreder(ALGraph* G)
//
//{	//从所给序列第一个元素开始，每遍历一个点就把顶点集order中该
//	//顶点的所有前驱顶点order[i]置1去掉，若后面遍历到order[i]为0，则违反了
//	// 拓扑排序特性，不是拓扑排序，退出返回0
//	int order[MAX_VERTEX_NUM] = {0};
//	//存在为0，去掉为1
//	int in[MAX_VERTEX_NUM] = { 0 };
//	for (int i = 1; i <= G->vexnum; i++)scanf("%d",&in[i]);//读入待判断序列
//	ArcNode* p;
//	for (int i = 1; i <= G->vexnum; i++)//判断序列头节点是否有前驱
//	{
//		p = G->vertices[i].firstarc;
//		while (p)
//		{
//			if (p->adjvex == in[1])
//				return 0;//如果序列开始节点有前驱，则一定不是拓扑序列
//			p = p->nextarc;
//		}
//	}
//	for (int i = 1; i <= G->vexnum; i++)//外层序列下标
//	{
//		if (order[in[i]] == 1)
//		{
//			return 0;
//		}
//		for (int j = 1; j <= G->vexnum; j++)//内层找前驱，遍历vertices数组
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
//int CreateDN(ALGraph* G)//无向图
//{
//	int i, j, k, weight;
//	int m, n;
//	vertices v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//读入顶点数，边数;
//	//getchar();//消耗回车
//	for (i = 1; i <= G->vexnum; i++)
//	{
//		//scanf("%d", &G->vertices[i].data);//读入表头节点表
//		G->vertices[i].firstarc = NULL;
//	}
//	for (i = 1; i <= G->arcnum; i++)
//	{
//		scanf("%d %d", &v1, &v2);
//		//m=LocateVex_M(G, v1);
//		//n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, v1, v2);//直接对应下标，不需要调用locate函数,下标从0开始
//		//Add_Adj_Node(G, n, m);//注意，无向图，a连b，b也要连a
//	}
//}
//
//
//int Add_Adj_Node(ALGraph* G, int m, int n)//增加节点到邻接表
//{//v表示第几个节点，c表示要增加的节点关键字值
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
//int LocateVex_M(ALGraph* G, vertices v)//找到v2对应的顶点数据在vertices数组中的序号i或j，对应的就是在图中的位置
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
//	CreateDN(&G);////有向图,AOV网
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
////	int a[1000];//用来储存节点是否输出过的数组
////	for (int i = 0; i < 1000; i++)
////		a[i] = 0;//初始化为0.表明节点都没输出过
////	PtrToAdjVNode p;
////	for (int i = 0; i < Graph->Nv; i++)//遍历输入的序列
////	{
////		Seq[i]--;//关键点！！！！根据上边的分析，将要判断的数组每个数都减1
////		for (int j = 0; j < Graph->Nv; j++) //遍历图的邻接链表
////		{
////			if (a[j] == 1 || j == Seq[i])//如果当前节点输出过，或者和要判断的序列节点相同，跳过，我个人认为可能节省点时间吧。嘿嘿
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
