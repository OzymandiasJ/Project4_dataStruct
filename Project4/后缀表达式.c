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
//	int top;//栈顶指针
//
//}SeqStack;
//
//void InitStack(SeqStack* s);//初始化栈
//void Push(SeqStack* s, stack_element_type x);//入栈
//void Pop(SeqStack* s, stack_element_type* x);//出栈,将栈顶元素弹出到x中
//
//
//
//void InitStack(SeqStack* s)//初始化栈
//{
//	s->top = -1;
//}
//void Push(SeqStack* s, stack_element_type x)//入栈
//{
//	if (s->top == stack_size - 1) { printf("栈满，error!"); return 0; }
//	s->top++;
//	s->elem[s->top] = x;
//}
//void Pop(SeqStack* s, stack_element_type* x)//出栈,将栈顶元素弹出到x中
//{
//	if (s->top == -1) { printf("栈空，无法弹出，error!"); return 0; }
//	*x = s->elem[s->top];
//	printf("%d出栈\n", s->elem[s->top]);
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
//	SeqStack* OVS = (SeqStack*)malloc(sizeof(SeqStack));//操作数栈
//	SeqStack* OPTR = (SeqStack*)malloc(sizeof(SeqStack));//操作符栈
//	InitStack(OVS);//初始化栈
//	InitStack(OPTR);//初始化栈
//	char str[30] = {'\0'};
//	int i, j, num;
//	scanf("%s",str);//结尾标识字符为"#"
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