////括号匹配算法
//
//
////void test()
////{
////	int i, A[10];
////	for (i = 0; i < 10; i++) { /*/
////		A[i] = i;}}
////}
////.
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define stack_size 50
//#define stack_element_type char 
//typedef struct
//{
//	stack_element_type elem[30];
//	int top;//栈顶指针
//
//}SeqStack;
//
//void InitStack(SeqStack* s);//初始化栈
//void Push(SeqStack* s, stack_element_type x);//入栈
//int Pop(SeqStack* s, stack_element_type* x);//出栈,将栈顶元素弹出到x中
//
//
//
//void InitStack(SeqStack* s)//初始化栈
//{
//	s->top = -1;
//	 //strcpy(s, "\0");
//}
//void Push(SeqStack* s, stack_element_type x)//入栈
//{
//	if (s->top == stack_size - 1) { printf("栈满，error!"); return 0; }
//	s -> top++;
//	s->elem[s->top] = x;
//}
//int Pop(SeqStack* s, stack_element_type *x)//出栈,将栈顶元素弹出到x中
//{
//	if(s->top==-1) { /*printf("栈空，无法弹出，error!");*/ return 0; }
//	*x=s->elem[s->top];
//	//printf("%d出栈\n", s->elem[s->top]);
//	s->elem[s->top] = '\0';
//	s->top--;
//	return 1;
//}
//void GetTop(SeqStack* s, stack_element_type* x)//读栈顶元素
//{
//	if (s->top == -1) { printf("栈空，无法读取，error!"); return 0; }
//	*x = s->elem[s->top];
//	//printf("读栈顶元素%d\n", s->elem[s->top]);
//	return 0;
//}
//void Symbol_pairing(SeqStack* s, stack_element_type str[100])
//{
//	int i = 0,a,num=0;
//	char c = '\0';
//	char* sss = &c;
//	stack_element_type Symbol[100] = { '\0' };
//	while (!(str[i] == '.' && str[i - 1] == '\n'))
//	{
//		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
//		{
//			Push(s, str[i]);
//		}
//
//		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
//		{
//			a=Pop(s, sss);
//			if (a == 0 )//弹出失败
//			{
//				printf("NO\n");
//				printf("%c-?\n", str[i]);
//				num++;
//			}
//		}
//		i++;
//	}
//	if (s->top == -1&& num == 0)printf("YES");
//	else {
//		if(num==0) printf("NO\n");
//		while (s->top != -1)
//		{
//			Pop(s, sss);
//			switch (*sss)
//			{
//			case '{':
//				printf("}-?\n"); break;
//			case '(':
//				printf(")-?\n"); break;
//			case '[':
//				printf("]-?\n"); break;
//			case '}':
//				printf("{-?\n"); break;
//			case ')':
//				printf("(-?\n"); break;
//			case ']':
//				printf("[-?\n"); break;
//			}
//		}
//	}
//
//}
//int main(void)
//{
//	int i = 2;
//	char str[100] = { '\0' };
//	char c1='\0', c2='\0';
//	scanf("%c%c",&str[0],&str[1]);
//	while (str[i]!='\n'&& str[i-1] != '.')
//	{
//		scanf("%c",&str[i]);
//		i++;
//	}
//
//	SeqStack* s = (SeqStack*)malloc(sizeof(SeqStack));
//	InitStack(s);//初始化栈
//	Symbol_pairing(s, str);
//
//	return 0;
//}