//#include <iostream>
//using namespace std;
//#pragma warning(disable:4996)
////极端排序，顾名思义，是排序方法很极端的算法，体现在时间复杂度极低，可以达到O(n),
////而空间复杂度却与待排序序列息息相关，最好情况(1-n)下不需要额外辅助空间,最坏情况下
////(max>>10000)需要极大量空间,但鉴于最坏情况几乎很难遇到，而空间耗费这块我们采用静态空间申请解决
////对于冲突问题(存在多个相同关键字值),采取设置一个辅助计数数组来记录该值有多少个
//
///*
//11
//6 8 43  768 324 90 342 876 435 12 76
//*/
//int main(int argc, char** argv)
//{
//    int size;
//    scanf("%d", &size);//输入排序序列的大小
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
//            q[1][p[i]]++;//处理重复值
//        }
//        else q[0][p[i]] = p[i];//将数组p的值映射到数组q中
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
//            if (q[1][i] != 0)//存在重复值则重复映射
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
