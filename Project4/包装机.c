//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define stack_element_type char
//typedef struct
//{
//	stack_element_type elem[300];
//	int top;//ջ��ָ��
//	int MAXSIZE;
//}SeqStack;
//
//void InitStack(SeqStack* s, int S);//��ʼ��ջ
//int Push(SeqStack* s, stack_element_type x);//��ջ
//int Pop(SeqStack* s, stack_element_type* x);//��ջ,��ջ��Ԫ�ص�����x��
//
//
//
//void InitStack(SeqStack* s, int S)//��ʼ��ջ
//{
//	s->top = -1;
//	s->MAXSIZE = S - 1;
//}
//int Push(SeqStack* s, stack_element_type x)//��ջ
//{
//	char temp;
//	if (s->top == s->MAXSIZE)
//		Pop(s, &temp);//���ջ������������ջһ��Ԫ�أ�Ȼ������ջ
//	s->top++;
//	s->elem[s->top] = x;
//	return 1;
//}
//int Pop(SeqStack* s, stack_element_type* x)//��ջ,��ջ��Ԫ�ص�����x��
//{
//	if (s->top == -1)  return 0; //ջ�յĻ������κ���
//	*x = s->elem[s->top];
//	printf("%c", s->elem[s->top]);
//	s->top--;
//	return 1;
//}
//void GetTop(SeqStack* s, stack_element_type* x)//��ջ��Ԫ��
//{
//	if (s->top == -1) { printf("ջ�գ��޷���ȡ��error!"); return 0; }
//	*x = s->elem[s->top];
//	printf("��ջ��Ԫ��%d\n", s->elem[s->top]);
//	return 0;
//}
//
//int main(void)
//{
//	int i, j, x, N, M, S;
//	int k = 0;//��ť
//	char C;
//	//int tag;//Pop����ֵ
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
//	InitStack(s, S);//��ʼ��ջ
//	scanf("%d", &k);
//	while (k != -1)
//	{
//		if (p[k - 1] == M) {}//���������ˣ������κ���
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