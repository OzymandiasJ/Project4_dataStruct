//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
////����ڵ㣬Ҳ����ʹ��class��class��struct���������Ĭ�ϵķ���Ȩ�޲�ͬ
//
//typedef struct LinkList
//{
//    double data;
//	struct LinkList* next;//ָ����һ���ڵ��ָ��next
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
//void CreatList(LinkList* HeadNode, double* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//{
//    int i = 0;
//    LinkList* CurrentNode = HeadNode;
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//        if (i < DataNum - 1)// ����ÿ�θ�ֵ����Ҫ�½���㣬Ϊ�˱�֤û�ж���ķϽ��
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
//    LinkList* CurrentNode= HeadNode;
//    printf("����������ݣ� ");
//    while(CurrentNode!=NULL)
//    {
//        printf("%.lf ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//
//
//
//
//
//void ListOppose(LinkList* L)
//{   // ������ͷ�ڵ�ĵ���������
//    LinkList *q, *p ;
//    p = L;
//    p = L->next;
//    L->next = NULL;
//    while (p)
//    {
//        q = p;
//        p = p->next;
//        q->next = L->next;
//        L->next = q;
//    }
//    return OK;
//}
//
//void ListMerge(LinkList* A, LinkList* B, LinkList* C)
//{   // �ϲ��������������� A, B ��һ�������������� C
//    LinkList *qa, *pa, *pb, *qb;
//    pa = A;  qa = pa;   pa = pa->next;
//    pb = B->next;
//    C = A;
//    while (pa && pb)
//    {
//        if (pa->data <= pb->data)  // �� pa ��ֵ С�ڵ��� pb ��ֵ��ʱ�򣬽� pb ���뵽 pa ��                    
//                                  // ǰ��
//        {
//            qb = pb;       // qb Ϊ������ڵ�
//            pb = pb->next;    // pb ���ƣ�Ϊ�Ժ�Ĳ�����׼��
//            qb->next = qa->next;    // ���к���һ�д������������
//            qa->next = qb;
//            qa = qa->next;    // qa ���ƣ�Ϊ�Ժ�Ĳ�����׼��
//        }
//        else // pa ��ֵ���� pb ��ֵ
//        {
//            if (pa->data == pa->next->data) pa = pa->next;  // pa ��ֵ�� pa ֱ�Ӻ�̽ڵ�� 
//                                                           // ֵ��ȣ�pa �����        
//
//            qb = pb;                    // qb Ϊ������ڵ�
//            pb = pb->next;
//            qb->next = pa->next;      // ���к���һ�д������������ 
//            pa->next = qb;
//            pa = pa->next;            // pa ���ƣ�Ϊ�Ժ�Ĳ�����׼��
//        }
//    }
//    free(B);    // �ͷ� B �����ͷ���
//
//    return OK;
//}//ListMerge
//
//int main()
//{
//    int i, j;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData)/sizeof(double);
//    LinkList* HeadNode1 = List_init(), * HeadNode2 = List_init(), *HeadNode3 = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode1, InData, DataNum);//��������
//    CreatList(HeadNode2, InData, DataNum);
//    CreatList(HeadNode3, InData, DataNum);
//    printLinkList(HeadNode1);//�����������
//    printLinkList(HeadNode2);//�����������
//    ListOppose(HeadNode1);
//    ListOppose(HeadNode2);
//    printLinkList(HeadNode1);//�����������
//    printLinkList(HeadNode2);//�����������
//    ListMerge(&HeadNode1, &HeadNode2, &HeadNode3);
//    printLinkList(HeadNode3);//�����������
//	system("pause");
//	return 0;
//
//}
