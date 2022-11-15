//#include<stdio.h>
//#include<malloc.h>
//#pragma warning(disable:4996)
//#define FALSE 0 
//#define TRUE  1
//#define MAXSIZE  20
//typedef int elementype;
//typedef struct dynamicSHUZU
//{
//	unsigned int num;
//	elementype* p;//首地址
//	unsigned int numed;
//}DynamicS;
//void init(DynamicS* PA);
//int  printA(DynamicS* PA);
//int  FirstAssign(DynamicS* PA, elementype* data, elementype AssignElementNum);
//int AddElement(DynamicS* PA, elementype Elementdata);//尾部增加一个元素
//int DeleteRearElement(DynamicS* PA);//删除一个尾部元素
//int InsertMidElement(DynamicS* PA, int index, elementype Elementdata);//将Elementdata插入第index个节点上
//
//
//void init(DynamicS* PA)
//{
//	int i;
//	PA->num = MAXSIZE;
//	PA->p = calloc(PA->num, sizeof(elementype)); //calloc(元素个,元素类型的大小)
//	//用calloc而不用malloc是因为calloc来的空间会自动赋值为0
//	PA->numed = 0;
//}
//int printA(DynamicS* PA)//输出动态数组函数
//{
//	if (PA->numed == 0) {
//		printf("动态数组为空,已略过\n");
//		return FALSE;
//	}
//	int i = PA->numed;
//	while (i--) {
//		printf("%d ", (PA->p)[PA->numed - i - 1]);
//	}
//	printf("\n");
//	return TRUE;
//}
//int FirstAssign(DynamicS* PA, elementype* data, elementype AssignElementNum)
//{
//	if ((AssignElementNum + PA->numed) > PA->num) {
//		printf("初始数据写入溢出！,已pause！\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("初始化动态数组       ");
//	int i, j;
//	for (i = 0; i < AssignElementNum; i++) {
//		(PA->p)[i] = data[i];
//		PA->numed++;
//		//printf("%d ", (PA->p)[i]);
//	}
//	return TRUE;
//}
//int AddElement(DynamicS* PA, elementype Elementdata)//尾部增加一个元素
//{
//	if (PA->numed + 1 > PA->num) {
//		printf("数据增加写入溢出！,已pause！\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("尾部增加一个元素     ");
//	PA->p[PA->numed] = Elementdata;
//	PA->numed++;
//}
//int DeleteRearElement(DynamicS* PA)//删除一个尾部元素
//{
//	if (PA->numed == 0) {
//		printf("动态数组为空，无法继续删除,已pause！\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("删除一个尾部元素     ");
//	PA->p[PA->numed] = 0;
//	PA->numed--;
//	return TRUE;
//}
//int InsertMidElement(DynamicS* PA, int index, elementype Elementdata)
//{	//中间插入元素,将Elementdata插入第index个节点上,如果index==numed则插入到尾部,
//	//如果index>numed则报错卡住
//	if (index - 1 > PA->numed) {
//		printf("数据增加越界操作！,已pause！\n");
//		system("pause");
//		return FALSE;
//	}
//	if (PA->numed+1>PA->num) {
//		printf("数据增加写入溢出,空间不够用！,已pause！\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("将%2d插入第%2d个节点上 ", Elementdata, index);//%2d:方面后续输出对齐，强行占位两个字符
//	int i = 0;
//	for (i = PA->numed; i >= index; i--)
//	{
//		PA->p[i] = PA->p[i - 1];//将index之后的元素依次后移
//	}
//	PA->p[index - 1] = Elementdata;
//	PA->numed++;
//	return TRUE;
//}
//int DeleteMidElement(DynamicS* PA, int index)//删除第index个节点元素
//{
//	printf("删除第%d个节点元素    ", index);
//	int i = 0;
//	for (i = index - 1; i < PA->numed + 1; i++)
//	{
//		PA->p[i] = PA->p[i + 1];//将index之后的元素依次前移
//	}
//	PA->p[PA->numed] = 0;
//	PA->numed--;
//	return TRUE;
//}
//void AddMemery1Times(DynamicS* PA)//增加一倍内存
//{
//	realloc(PA, sizeof(elementype)*PA->num*2);
//	PA->num *= 2;
//}
//int main(void)
//{
//	elementype i, j;
//	elementype data[MAXSIZE], temp;
//	//在上面修改MAXSIZE更改数组最大容量
//	//data为用于批量赋值的数组，AssignElementNum为批量赋值的数量
//	DynamicS A;
//	DynamicS* PA = &A;
//	init(PA); //初始化PA,默认初始最大容量为MAXSIZE20 
//	temp = 19;
//	while (temp--) data[temp] = temp + 1;//赋值数组printA(PA);
//	FirstAssign(PA, data, 19);		printA(PA);
//	int Elementdata = 20;
//	AddElement(PA, Elementdata);	printA(PA);
//	DeleteRearElement(PA);			printA(PA);
//	InsertMidElement(PA, 20, 20);	printA(PA);
//	DeleteMidElement(PA, 1);		printA(PA);
// 	InsertMidElement(PA, 1, 1);		printA(PA);
//	//如果数组空间不够用了，那么就需要重新申请空间，并且把原来空间的数据复制过去
//	AddMemery1Times(PA);			printA(PA);
//
//   	return 0;
//}