//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define stack_size 50
//#define stack_element_type int 
//typedef struct
//{
//	stack_element_type elem[30];
//	int top;//ջ��ָ��
//
//}SeqStack;
//
//void InitStack(SeqStack* s);//��ʼ��ջ
//void Push(SeqStack* s, stack_element_type x);//��ջ
//void Pop(SeqStack* s, stack_element_type* x);//��ջ,��ջ��Ԫ�ص�����x��
//
//
//
//void InitStack(SeqStack* s)//��ʼ��ջ
//{
//	s->top = -1;
//}
//void Push(SeqStack* s, stack_element_type x)//��ջ
//{
//	if (s->top == stack_size - 1) { printf("ջ����error!"); return 0; }
//	s -> top++;
//	s->elem[s->top] = x;
//}
//void Pop(SeqStack* s, stack_element_type *x)//��ջ,��ջ��Ԫ�ص�����x��
//{
//	if(s->top==-1) { printf("ջ�գ��޷�������error!"); return 0; }
//	*x=s->elem[s->top];
//	printf("%d��ջ\n", s->elem[s->top]);
//	s->top--;
//	return 0;
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
//	int i, j, x = 999;
//	SeqStack* s=(SeqStack*)malloc(sizeof(SeqStack));
//	InitStack(s);//��ʼ��ջ
//	Push(s, x);//��ջ
//	Pop(s, &x);//��ջ
//	x = 111;
//	Push(s, x);//��ջ
//	GetTop(s, &x);//��ջ��Ԫ��
//
//
//
//
//
//	system("pause");
//	return 0;
//}