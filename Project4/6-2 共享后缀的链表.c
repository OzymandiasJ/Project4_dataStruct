//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
//typedef struct LinkList
//{
//    char data;
//    struct LinkList* next;//ָ����һ���ڵ��ָ��next
//}LinkList;
//
//void LinkListReverse(LinkList** HeadNode);
//LinkList* commen_houzhui(LinkList* HeadNode1, LinkList* HeadNode2);//�ҵ���ͬ��׺
//LinkList* List_init();//�����ʼ��_����ͷ�ڵ� 
//void CreatList(LinkList* HeadNode, char* InData, int DataNum);//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//
//
//LinkList* List_init()//�����ʼ��_����ͷ�ڵ� 
//{
//    LinkList* HeadNode = (LinkList*)malloc(sizeof(LinkList));
//    if (HeadNode == NULL)
//    {
//        printf("�ռ仺�治��");
//        return HeadNode;
//    }
//    HeadNode->data = 0;
//    HeadNode->next = NULL;
//    return HeadNode;
//}
//
//void CreatList(LinkList* HeadNode, char* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//{
//    int i = 0;
//    LinkList* CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//
//        if (i < DataNum - 1)// ����ÿ�θ�ֵ����Ҫ�½���㣬Ϊ�˱�֤û�ж���ķϽ��
//
//        {
//            CurrentNode->next = (LinkList*)malloc(sizeof(LinkList));
//            CurrentNode = CurrentNode->next;
//        }
//    }
//    CurrentNode->next = NULL;
//    //ĩ�ڵ�û��ָ���κνڵ㣬����ʹ��ָ��ͷ�ڵ㣬����γ�һ��ѭ������
//}
//void printLinkList(LinkList* HeadNode)//�����������
//{
//    LinkList* CurrentNode = HeadNode;
//    //printf("����������ݣ� ");
//    while (CurrentNode != NULL)
//    {
//        printf("%c", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//void LinkListReverse(LinkList** HeadNode)//�޸�ԭ����ͷָ�룬���Դ��ݶ���ָ��
//{                                                                   
//    LinkList* temp ;
//    LinkList* CurrentNode = NULL; 
//    while (*HeadNode)
//    {
//        temp = *HeadNode;//��ס��ǰͷ�ڵ�λ��
//        *HeadNode = (*HeadNode)->next;//ͷ�ڵ���������ƶ�������ͷ�ڵ㣬ע����������ȼ�
//        temp->next= CurrentNode;//����ͷ�ڵ�ָ����ָ��ǰ��ڵ�
//        CurrentNode = temp;//���µ�ǰ�ڵ�
//    }
//    *HeadNode = CurrentNode;
//}
//LinkList* commen_houzhui(LinkList* HeadNode1, LinkList* HeadNode2)//�ҵ���ͬ��׺
//{
//    
//    LinkList* L = List_init();//������
//    L->next = NULL;
//    //LinkListReverse( &HeadNode1);//�ȷ�ת����
//    LinkList* temp1;
//    LinkList* CurrentNode1 = NULL;
//    while (HeadNode1)
//    {
//        temp1 = HeadNode1;//��ס��ǰͷ�ڵ�λ��
//        HeadNode1 = (HeadNode1)->next;//ͷ�ڵ���������ƶ�������ͷ�ڵ㣬ע����������ȼ�
//        temp1->next = CurrentNode1;//����ͷ�ڵ�ָ����ָ��ǰ��ڵ�
//        CurrentNode1 = temp1;//���µ�ǰ�ڵ�
//    }
//    HeadNode1 = CurrentNode1;
//    //LinkListReverse( &HeadNode1);//�ȷ�ת����
//
//
//    //LinkListReverse( &HeadNode2);//�ȷ�ת����
//    LinkList* temp2;
//    LinkList* CurrentNode2 = NULL;
//    while (HeadNode2)
//    {
//        temp2 = HeadNode2;//��ס��ǰͷ�ڵ�λ��
//        HeadNode2 = (HeadNode2)->next;//ͷ�ڵ���������ƶ�������ͷ�ڵ㣬ע����������ȼ�
//        temp2->next = CurrentNode2;//����ͷ�ڵ�ָ����ָ��ǰ��ڵ�
//        CurrentNode2 = temp2;//���µ�ǰ�ڵ�
//    }
//    HeadNode2 = CurrentNode2;
//    //LinkListReverse( &HeadNode2);//�ȷ�ת����
//
//
//    printLinkList(HeadNode1); printLinkList(HeadNode2);
//    LinkList* CurrentNode11 = HeadNode1;
//    LinkList* CurrentNode22 = HeadNode2;\
//        while (CurrentNode11->data == CurrentNode22->data)
//        {
//            LinkList* newnode = (LinkList*)malloc(sizeof(LinkList));
//            newnode->data = CurrentNode11->data;
//            newnode->next=L->next;
//            L->next = newnode;
//            CurrentNode11 = CurrentNode11->next;
//            CurrentNode22 = CurrentNode22->next;
//        }
//    LinkList* CurrentNode = L;
//    //printf("����������ݣ� ");
//    while (CurrentNode != NULL)
//    {
//        printf("%c", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//}
//
//
//int main()
//{
//    int i, j;
//    char InData1[10] = "being";
//    char InData2[10] = "loading";
//    int DataNum1=0, DataNum2 = 0;
//    while (InData1[DataNum1] != '\0')DataNum1++;
//    while (InData2[DataNum2] != '\0')DataNum2++;
//    LinkList* HeadNode1 = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    LinkList* HeadNode2 = List_init();
//    CreatList(HeadNode1, InData1, DataNum1);//
//    CreatList(HeadNode2, InData2, DataNum2);//��������
//    printLinkList(HeadNode1);//�����������
//    printLinkList(HeadNode2);//�����������
//    commen_houzhui(HeadNode1, HeadNode2);
//    //printLinkList(L);//�����������
//
//
//	//system("pause");
//	return 0;
//
//}