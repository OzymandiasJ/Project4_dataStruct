//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//#define ElementType int //ע���޸�ElementTypeʱ�޸�print���������ʽ
//����ڵ㣬Ҳ����ʹ��class��class��struct���������Ĭ�ϵķ���Ȩ�޲�ͬ
///*typedef struct LNode
//{
//    int Element ;
//    struct LNode* next;
//}LinkList*/;
//typedef struct LinkList
//{
//    ElementType data;
//    struct LinkList* next;//ָ����һ���ڵ��ָ��next
//}LinkList;
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
//void CreatList(LinkList* HeadNode, ElementType* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
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
//    printf("����������ݣ� ");
//
//    while (CurrentNode != NULL)
//    {
//        printf("%d ", CurrentNode->data);//ע����øú���ʱ�����޸������ʽ
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//
//int DeleteList_ik(LinkList* HeadNode, int index,int k)
//{
//    int i = 1;
//    LinkList* CurrentNode = HeadNode;//����CurrentNode��Ϊ�˷������free����ڵ�
//    LinkList* NodeToDelete;
//    //��CurrentNodeָ���ɾ��λ�õ�ǰһ����㣨index -1��
//    while (CurrentNode && (i++ < index - 1))
//    {
//        CurrentNode = CurrentNode->next;
//    }//�ҵ�Ҫ�����Ľڵ��ֱ��ǰ���ڵ�
//
//    for (i = 0; i < k; i++)
//    {
//        NodeToDelete = CurrentNode->next;//��NodeToDeleteָ���ɾ���Ľڵ�
//        CurrentNode->next = NodeToDelete->next;//���ý��ĺ��ý�����ӵ�ǰ�ý���nextָ�봦
//        free(NodeToDelete);//�ͷŵ���ɾ���ڵ�Ŀռ�
//    }
//
//    return OK;
//}
//void OddFore_EvenAfter(LinkList* HeadNode)//������ǰż���ں�
//{
//    int temp = 0;
//    LinkList* CurrentNode = HeadNode->next;//����CurrentNode��Ϊ�˷������free����ڵ�
//    LinkList* NodeToDelete;
//    while (CurrentNode->next)//�ӵڶ����ڵ㿪ʼ����
//    {
//        if (CurrentNode->next->data % 2 == 1)//���ýڵ����һ�ڵ�������Ϊ������ժ�����嵽ͷ�ڵ����
//        {//ע������CurrentNodeΪ������Ϊż���Ľڵ��ֱ��ǰ���ڵ�
//            temp = CurrentNode->next->data;//��������ڵ�������
//            NodeToDelete = CurrentNode->next;//��NodeToDeleteָ���ɾ���Ľڵ�
//            CurrentNode->next = NodeToDelete->next;//���ý��ĺ��ý�����ӵ�ǰ�ý���nextָ�봦
//            free(NodeToDelete);//�ͷŵ���ɾ���ڵ�Ŀռ�
//            //��ͷ�����µ�������Ϊ�����Ľڵ�
//            LinkList* new_node = (LinkList*)malloc(sizeof(LinkList));
//            new_node->data = temp;//��tempֵ�����½ڵ��������
//            new_node->next = HeadNode->next;//�������½ڵ�Ľ��������������
//            HeadNode->next = new_node;
//            CurrentNode = CurrentNode->next;//���µ�ǰָ���ָ��
//        
//        }
//    
//    }
//
//}
//
//
//int main()
//{
//    int i, j;
//    ElementType InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(ElementType);
//    LinkList* HeadNode = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode, InData, DataNum);//��������
//    printLinkList(HeadNode);//�����������
//    OddFore_EvenAfter(HeadNode);
//    printLinkList(HeadNode);//������ǰż���ں�
//
//
//
//    //DeleteList_ik(HeadNode, 3 , 3 ); printLinkList(HeadNode);//ɾ���ڵ㲢�ٴ����
//    system("pause");
//    return 0;
//
//}
