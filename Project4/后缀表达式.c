//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
////a*b+(c-d/e)*f#
//#define stack_size 50
//#define stack_element_type int 
//enum symbol
//{
//	ADD,
//	SUB,
//	MUL,
//	DIV,
//
//};
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
//	s->top++;
//	s->elem[s->top] = x;
//}
//void Pop(SeqStack* s, stack_element_type* x)//��ջ,��ջ��Ԫ�ص�����x��
//{
//	if (s->top == -1) { printf("ջ�գ��޷�������error!"); return 0; }
//	*x = s->elem[s->top];
//	printf("%d��ջ\n", s->elem[s->top]);
//	s->top--;
//	return 0;
//}
//
//
//void houzhui(SeqStack* OVS, SeqStack* OPTR, char* str[])
//{
//	int num = 0,i,j;
//
//}
//int main(void)
//{
//	int i, j, x;
//	SeqStack* OVS = (SeqStack*)malloc(sizeof(SeqStack));//������ջ
//	SeqStack* OPTR = (SeqStack*)malloc(sizeof(SeqStack));//������ջ
//	InitStack(OVS);//��ʼ��ջ
//	InitStack(OPTR);//��ʼ��ջ
//	char str[30] = {'\0'};
//	int i, j, num;
//	scanf("%s",str);//��β��ʶ�ַ�Ϊ"#"
//	houzhui(OVS,OPTR,str);
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}