#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomBirthday(int [], int );
int isSameWithTwo(int *, int );
int main( )              /* ������ */
{
    srand(time(NULL)); //�������������
    int birthday[100], n;
    scanf_s("%d",&n);
    int i, same = 0;
    for(i = 0; i < 10000; i++)
    {
        randomBirthday(birthday, n);
        if(isSameWithTwo(birthday, n))  same++;
    }
    printf("10000�β��ԣ���%d�γ�����ͬ�ģ���ͬ�ĸ�����:%f\n", same, same * 1.0 / 10000);
    return 0;
}
//�������50��������
void randomBirthday(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        a[i] = (rand() % 365) + 1;
}
//�ж������������ͬ������select sort
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
