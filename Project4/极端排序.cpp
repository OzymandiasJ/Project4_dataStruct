//#include <iostream>
//using namespace std;
//#pragma warning(disable:4996)
////�������򣬹���˼�壬�����򷽷��ܼ��˵��㷨��������ʱ�临�Ӷȼ��ͣ����ԴﵽO(n),
////���ռ临�Ӷ�ȴ�����������ϢϢ��أ�������(1-n)�²���Ҫ���⸨���ռ�,������
////(max>>10000)��Ҫ�������ռ�,���������������������������ռ�ķ�������ǲ��þ�̬�ռ�������
////���ڳ�ͻ����(���ڶ����ͬ�ؼ���ֵ),��ȡ����һ������������������¼��ֵ�ж��ٸ�
//
///*
//11
//6 8 43  768 324 90 342 876 435 12 76
//*/
//int main(int argc, char** argv)
//{
//    int size;
//    scanf("%d", &size);//�����������еĴ�С
//    int* p = (int*)malloc(sizeof(int) * size);
//    int temp, max;
//    scanf("%d",&p[0]);
//    max = p[0];
//    for (int i = 1; i < size; i++)
//    {
//        scanf("%d",&p[i]);
//        if (max < p[i]) max = p[i];
//    }
//
//    int** q = new int* [max];
//    for (int i = 0; i < max; i++)
//    {
//        q[i] = new int[2];
//        //q[0][i] = 9999;
//        //q[1][i] =0;
//    }
//    for (int i = 0; i < max; i++)
//    {
//        q[0][i] = 9999;
//        q[1][i] = 0;
//    }
//    for (int i = 0; i < max; i++)
//    {
//        printf("%d %d\n", q[0][i], q[1][i]);
//    }
//   
//    for (int i = 0; i < size; i++) 
//    {
//        if (q[0][p[i]] == p[i])
//        {
//            q[1][p[i]]++;//�����ظ�ֵ
//        }
//        else q[0][p[i]] = p[i];//������p��ֵӳ�䵽����q��
//    }
//
//    for (int i = 0; i < max; i++)
//    {
//        printf("%d %d\n", q[0][i], q[1][i]);
//    }
//    int tag;
//    int j = 0;
//    for (int i = 0; i < max; i++)
//    {
//        
//        if (q[0][i] != 9999)
//        {
//            p[j++] = q[0][i];
//            if (q[1][i] != 0)//�����ظ�ֵ���ظ�ӳ��
//            {
//                printf("%d\n", q[1][i]);
//                for (int k = 0; k < q[1][i]; k++)
//                {
//                    p[j++] = q[0][i];
//                }
//            
//            }
//        }  
//    }
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d",p[i]);
//    }
//    return 0;
//}
