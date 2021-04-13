#include "stdio.h"
#include "stdlib.h"
#define N 5
void main() 
{
//数组越界
	//int score[5];
	//score[5] = 20;
	//int a = score[5];
//【例5-2】将n个人某门课程的成绩输入计算机后输出最高分和最低分
	//int a[N], max, min, i;
	//for (i = 0; i < N; i++)
	//	scanf_s("%d", &a[i]);
	//min = max = a[0];
	//for (i = 1; i < N; i++)
	//	if (a[i] < min) min = a[i];             /* min存放最小值 */
	//	else if (a[i] > max) max = a[i];     /* max存放最大值 */
	//printf("最高分：%d  最低分：%d", max, min);
	//printf("\n");
  //交换过程
	//int a[N], t, i, j;
	//printf("输入%d个整数：\n", N);
	//for (i = 0; i < N; i++)
	//	scanf_s("%d", &a[i]);
	//for (i = 1; i < N; i++)
	//	if (a[i] < a[0])
	//	{
	//		t = a[0];
	//		a[0] = a[i];
	//		a[i] = t;
	//		for (j = 0; j < N; j++)
	//			printf("%d ", a[j]);
	//		printf("\n");
	//	}
	//printf("交换后数组： ");
	//for (i = 0; i < N; i++)
	//	printf("%d ", a[i]);
	//printf("\n");
 //减少交换过程
	//int a[N], i, j, k, n, p, t;
	//printf("输入%d个整数：\n", N);
	//for (i = 0; i < N; i++)
	//	scanf_s("%d", &a[i]);
	//for (j = 1; j < N; j++)
	//{
	//	if (a[0] > a[j]) 
	//		k = j; //记录最大值下标
	//	for (i = 0; i < N; i++)
	//		printf("%d ", a[i]);
	//	printf("k = %d\n",k);
	//}
	//if (k != 0)
	//{
	//	t = a[0];    //确定数组下标0位置元素值
	//	a[0] = a[k];
	//	a[k] = t;
	//}
	//printf("交换后数组： ");
	//for (k = 0; k < N; k++)
	//	printf("%d ", a[k]);
	//printf("\n");

//【例5-5】选择法排序,升序
	//int a[N], i, j, t, k;
	//for (i = 0; i < N; i++)
	//	scanf_s("%d", &a[i]);
	//for (j = 0; j < N - 1; j++)
	//{
	//	for (i = j + 1; i < N; i++)
	//		if (a[i] < a[j])
	//		{
	//			t = a[j];    //确定数组下标0位置元素值
	//			a[j] = a[i];
	//			a[i] = t;
	//		}
	//}
	////for(j = 0; j < N - 1; j++)
	////{
	////    k = j;
	////    for (i = j + 1; i < N; i++)
	////        if (a[i] < a[k]) k = i; /*k存放最小值元素下标 */
	////    if(k != j)
	////    {
	////        t = a[j];    /*交换*/
	////        a[j] = a[k];
	////        a[k] = t;
	////    }
	////}
	//for (i = 0; i < N; i++)
	//	printf("%d ", a[i]);
	//printf("\n");
 //每趟交换过程
	//int a[N], max, i, j, k, n, p, q, t;
	//printf("输入%d个整数：",N);
	//for (i = 0; i < N; i++)
	//	scanf_s("%d", &a[i]);
	//for (i = 0; i < N-1; i++)
	//{
	//	for (j = i + 1; j < N; j++)
	//	{
	//		if (a[j] >a[i]) 
	//		{
	//			t = a[j];    //确定数组下标0位置元素值
	//			a[j] = a[i];
	//			a[i] = t;
	//		}
	//	}
	//	printf("第%d趟：", i + 1);
	//	for (i = 0; i < N; i++)
	//		printf("%d ", a[i]);
	//	printf("\n");
	//}

//【例5-4】冒泡法（交换法）排序，升序
	//int a[N], i, j, k, s, n;
	//printf("输入%d个整数：", N);
	//for (i = 0; i < N; i++)
	//	scanf_s("%d", &a[i]);
	//for (i = 1; i < N; i++)
	//{
	//	for (j = 0; j < N - i; j++)
	//		if (a[j] > a[j + 1])//相邻元素比较交换
	//		{
	//			s = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = s;
	//			for (k = 0; k < N; k++)
	//				printf("%d ", a[k]);
	//			printf("\n");
	//		}
	//		printf("\n");
	//}
	//printf("排序后数组：");
	//for (i = 0; i < N; i++)
	//	printf("%d ", a[i]);
	//printf("\n");

}
