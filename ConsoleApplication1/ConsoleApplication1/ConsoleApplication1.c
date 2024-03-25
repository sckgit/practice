//// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <stdio.h>
//
//int main()
//{
//  //1.打印1-100中所有整数含有数字9的个数
//	int count = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("含有9的个数为%d\n", count);
//
//	//2.计算1/1-1/2+1/3-1/4+1/5+......-1/100的值
//	//注意数据类型以及浮点型计算
//	int flag = 1;
//	double sum = 0.0;
//	for (int j = 1; j <= 100; j++) {
//		sum += flag * 1.0 / j;
//		flag = -flag;
//	}
//	printf("和是：%lf\n", sum);
//
//	//3.打印九九乘法表
//	for (int k = 1; k <= 9; k++) {
//		for (int h = 1; h <= k; h++) {
//			printf("%dx%d=%2d  ", k, h, k * h);
//		}
//		printf("\n");
//	}
//
//	//4.查找输出10个数中的最大值
//	int arr[] = { 1,2,3,4,5,6,10,9,8,7 };
//	int max = arr[0];
//	for (int x = 1; x < 10; x++) {
//		if (max < arr[x]) {
//			max = arr[x];
//		}
//	}
//	printf("最大值是%d\n", max);
//}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//
