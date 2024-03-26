#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//判断是否是素数
int is_prime(int n) {
	int j = 0;
	for (j = 2; j <=sqrt(n); j++) {
		if (n % j == 0) {
			return 0;
		}
	}
	return 1;
}
//判断是否是闰年(闰年能被4整除无法被100整除或能整除400)
int is_leap_year(int x) {
	int y = 0;
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
		return 1;
	}
	else {
		return 0;
	}
}

//二分查找函数
int binary_search(int a[],int key,int s) {
	int left = 0;
	int right = s-1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] > key) {
			right = mid - 1;
		}
		else if (a[mid] < key) {
			left = mid + 1;
		}
		else if (a[mid] == key) {
			return mid;
		}
	}
		return -1;
}

//不创建临时变量，求字符串的长度
int my_string(char* str) {
	if (*str != '\0') {
		return 1 + my_string(str + 1);
	}
	else {
		return 0;
	}
}

//迭代函数求n的阶乘
int Fac(int n) {
	if (n <= 1) {
		return 1;
	 }
	else if (n > 1) {
		return n * Fac(n - 1);
	}
}

//斐波那契数列 1 1 2 3 5 8 13
int Fib(int n) {
	if (n <= 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}

int Fib(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() {
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i ++) {
	//	if (is_prime(i) == 1) {
	//		count++;
	//		printf("%d是素数\n", i);
	//	}
	//}
	//printf("%d个素数\n",count);
	////
	//for (i = 1000; i <= 2024; i++) {
	//	if (is_leap_year(i) == 1) {
	//		count++;
	//		printf("%d是闰年\n", i);
	//	}
	//}
	//printf("%d个闰年\n", count);
	char arr[] = "scknb";
	/*int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 != ret) {
		printf("找到了第%d个位置\n", ret);
	}
	else {
		printf("找不到\n");
	}
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;*/
	printf("%d\n", Fac(4));
}