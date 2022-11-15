//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define stack_element_type char
//typedef struct
//{
//	stack_element_type elem[300];
//	int top;//栈顶指针
//	int MAXSIZE;
//}SeqStack;
//
//void InitStack(SeqStack* s, int S);//初始化栈
//int Push(SeqStack* s, stack_element_type x);//入栈
//int Pop(SeqStack* s, stack_element_type* x);//出栈,将栈顶元素弹出到x中
//
//
//
//void InitStack(SeqStack* s, int S)//初始化栈
//{
//	s->top = -1;
//	s->MAXSIZE = S - 1;
//}
//int Push(SeqStack* s, stack_element_type x)//入栈
//{
//	char temp;
//	if (s->top == s->MAXSIZE)
//		Pop(s, &temp);//如果栈满，则立即出栈一个元素，然后再入栈
//	s->top++;
//	s->elem[s->top] = x;
//	return 1;
//}
//int Pop(SeqStack* s, stack_element_type* x)//出栈,将栈顶元素弹出到x中
//{
//	if (s->top == -1)  return 0; //栈空的话不做任何事
//	*x = s->elem[s->top];
//	printf("%c", s->elem[s->top]);
//	s->top--;
//	return 1;
//}
//void GetTop(SeqStack* s, stack_element_type* x)//读栈顶元素
//{
//	if (s->top == -1) { printf("栈空，无法读取，error!"); return 0; }
//	*x = s->elem[s->top];
//	printf("读栈顶元素%d\n", s->elem[s->top]);
//	return 0;
//}
//
//int main(void)
//{
//	int i, j, x, N, M, S;
//	int k = 0;//按钮
//	char C;
//	//int tag;//Pop返回值
//	//int temp;
//	scanf("%d %d %d", &N, &M, &S);
//	char str[100][1000];
//	int p[100] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		getchar();
//		for (j = 0; j < M; j++)
//		{
//			scanf("%c", &str[i][j]);
//		}
//	}
//	SeqStack* s = (SeqStack*)malloc(sizeof(SeqStack));
//	InitStack(s, S);//初始化栈
//	scanf("%d", &k);
//	while (k != -1)
//	{
//		if (p[k - 1] == M) {}//如果轨道空了，则不做任何事
//		else if (k != 0)
//		{
//			Push(s, str[k - 1][p[k - 1]]);
//			p[k - 1]++;
//		}
//		else
//		{
//			Pop(s, &C);
//		}
//		scanf("%d", &k);
//		if (k == -1) break;
//	}
//
//	return 0;
//}