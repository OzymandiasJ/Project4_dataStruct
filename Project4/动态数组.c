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
//	elementype* p;//�׵�ַ
//	unsigned int numed;
//}DynamicS;
//void init(DynamicS* PA);
//int  printA(DynamicS* PA);
//int  FirstAssign(DynamicS* PA, elementype* data, elementype AssignElementNum);
//int AddElement(DynamicS* PA, elementype Elementdata);//β������һ��Ԫ��
//int DeleteRearElement(DynamicS* PA);//ɾ��һ��β��Ԫ��
//int InsertMidElement(DynamicS* PA, int index, elementype Elementdata);//��Elementdata�����index���ڵ���
//
//
//void init(DynamicS* PA)
//{
//	int i;
//	PA->num = MAXSIZE;
//	PA->p = calloc(PA->num, sizeof(elementype)); //calloc(Ԫ�ظ�,Ԫ�����͵Ĵ�С)
//	//��calloc������malloc����Ϊcalloc���Ŀռ���Զ���ֵΪ0
//	PA->numed = 0;
//}
//int printA(DynamicS* PA)//�����̬���麯��
//{
//	if (PA->numed == 0) {
//		printf("��̬����Ϊ��,���Թ�\n");
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
//		printf("��ʼ����д�������,��pause��\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("��ʼ����̬����       ");
//	int i, j;
//	for (i = 0; i < AssignElementNum; i++) {
//		(PA->p)[i] = data[i];
//		PA->numed++;
//		//printf("%d ", (PA->p)[i]);
//	}
//	return TRUE;
//}
//int AddElement(DynamicS* PA, elementype Elementdata)//β������һ��Ԫ��
//{
//	if (PA->numed + 1 > PA->num) {
//		printf("��������д�������,��pause��\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("β������һ��Ԫ��     ");
//	PA->p[PA->numed] = Elementdata;
//	PA->numed++;
//}
//int DeleteRearElement(DynamicS* PA)//ɾ��һ��β��Ԫ��
//{
//	if (PA->numed == 0) {
//		printf("��̬����Ϊ�գ��޷�����ɾ��,��pause��\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("ɾ��һ��β��Ԫ��     ");
//	PA->p[PA->numed] = 0;
//	PA->numed--;
//	return TRUE;
//}
//int InsertMidElement(DynamicS* PA, int index, elementype Elementdata)
//{	//�м����Ԫ��,��Elementdata�����index���ڵ���,���index==numed����뵽β��,
//	//���index>numed�򱨴�ס
//	if (index - 1 > PA->numed) {
//		printf("��������Խ�������,��pause��\n");
//		system("pause");
//		return FALSE;
//	}
//	if (PA->numed+1>PA->num) {
//		printf("��������д�����,�ռ䲻���ã�,��pause��\n");
//		system("pause");
//		return FALSE;
//	}
//	printf("��%2d�����%2d���ڵ��� ", Elementdata, index);//%2d:�������������룬ǿ��ռλ�����ַ�
//	int i = 0;
//	for (i = PA->numed; i >= index; i--)
//	{
//		PA->p[i] = PA->p[i - 1];//��index֮���Ԫ�����κ���
//	}
//	PA->p[index - 1] = Elementdata;
//	PA->numed++;
//	return TRUE;
//}
//int DeleteMidElement(DynamicS* PA, int index)//ɾ����index���ڵ�Ԫ��
//{
//	printf("ɾ����%d���ڵ�Ԫ��    ", index);
//	int i = 0;
//	for (i = index - 1; i < PA->numed + 1; i++)
//	{
//		PA->p[i] = PA->p[i + 1];//��index֮���Ԫ������ǰ��
//	}
//	PA->p[PA->numed] = 0;
//	PA->numed--;
//	return TRUE;
//}
//void AddMemery1Times(DynamicS* PA)//����һ���ڴ�
//{
//	realloc(PA, sizeof(elementype)*PA->num*2);
//	PA->num *= 2;
//}
//int main(void)
//{
//	elementype i, j;
//	elementype data[MAXSIZE], temp;
//	//�������޸�MAXSIZE���������������
//	//dataΪ����������ֵ�����飬AssignElementNumΪ������ֵ������
//	DynamicS A;
//	DynamicS* PA = &A;
//	init(PA); //��ʼ��PA,Ĭ�ϳ�ʼ�������ΪMAXSIZE20 
//	temp = 19;
//	while (temp--) data[temp] = temp + 1;//��ֵ����printA(PA);
//	FirstAssign(PA, data, 19);		printA(PA);
//	int Elementdata = 20;
//	AddElement(PA, Elementdata);	printA(PA);
//	DeleteRearElement(PA);			printA(PA);
//	InsertMidElement(PA, 20, 20);	printA(PA);
//	DeleteMidElement(PA, 1);		printA(PA);
// 	InsertMidElement(PA, 1, 1);		printA(PA);
//	//�������ռ䲻�����ˣ���ô����Ҫ��������ռ䣬���Ұ�ԭ���ռ�����ݸ��ƹ�ȥ
//	AddMemery1Times(PA);			printA(PA);
//
//   	return 0;
//}