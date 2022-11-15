//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define stack_size 50
//#define stack_element_type int 
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
//	s -> top++;
//	s->elem[s->top] = x;
//}
//void Pop(SeqStack* s, stack_element_type *x)//出栈,将栈顶元素弹出到x中
//{
//	if(s->top==-1) { printf("栈空，无法弹出，error!"); return 0; }
//	*x=s->elem[s->top];
//	printf("%d出栈\n", s->elem[s->top]);
//	s->top--;
//	return 0;
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
//	int i, j, x = 999;
//	SeqStack* s=(SeqStack*)malloc(sizeof(SeqStack));
//	InitStack(s);//初始化栈
//	Push(s, x);//入栈
//	Pop(s, &x);//出栈
//	x = 111;
//	Push(s, x);//入栈
//	GetTop(s, &x);//读栈顶元素
//
//
//
//
//
//	system("pause");
//	return 0;
//}