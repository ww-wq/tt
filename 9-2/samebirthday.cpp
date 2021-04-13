#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomBirthday(int [], int );
int isSameWithTwo(int *, int );
int main( )              /* 主函数 */
{
    srand(time(NULL)); //生成随机数种子
    int birthday[100], n;
    scanf_s("%d",&n);
    int i, same = 0;
    for(i = 0; i < 10000; i++)
    {
        randomBirthday(birthday, n);
        if(isSameWithTwo(birthday, n))  same++;
    }
    printf("10000次测试，有%d次出现相同的，相同的概率是:%f\n", same, same * 1.0 / 10000);
    return 0;
}
//随机生成50个人生日
void randomBirthday(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        a[i] = (rand() % 365) + 1;
}
//判断如果两个人相同函数，select sort
int isSameWithTwo(int *a, int n)
{
    int i, j;
    for(j = 0; j < n - 1; j++)
    {
        for(i = j + 1; i < n; i++)
        {
            if(a[i] == a[j])	return 1;
        }
    }
    return 0;
}
