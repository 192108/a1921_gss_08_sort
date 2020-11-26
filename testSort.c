#include<stdio.h>
#include"sort.h"
#define N 20

int main(int argc,char **argv[]){
	int a[N],i;
	srand(time(0));

	for (i=0;i<N;i++)
		a[i] = rand() % 100;
	printf("初始数据为:");

	for (i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	bubble1(a,N);
	//bubble2(a,N);
	//bubble3(a,N);
	printf("冒泡排序结果如下:");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");

	for (i=0;i<N;i++)
		a[i] = rand() % 100;
	printf("初始数据为:");

	for (i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	InsertSort(a,N);
	printf("插入排序结果如下:\n");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");

	for (i=0;i<N;i++)
		a[i] = rand() % 100;
	printf("初始数据为:");

	for (i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	SelectSort(a,N);
	printf("选择排序结果如下:\n");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");

	for (i=0;i<N;i++)
		a[i] = rand() % 100;
	printf("初始数据为:");

	for (i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	QuickSort(a,N);
	printf("快速排序结果如下:\n");
	for (i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
	return 0;

}
