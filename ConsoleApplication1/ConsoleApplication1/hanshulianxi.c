#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�ж��Ƿ�������
int is_prime(int n) {
	int j = 0;
	for (j = 2; j <=sqrt(n); j++) {
		if (n % j == 0) {
			return 0;
		}
	}
	return 1;
}
//�ж��Ƿ�������(�����ܱ�4�����޷���100������������400)
int is_leap_year(int x) {
	int y = 0;
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
		return 1;
	}
	else {
		return 0;
	}
}

//���ֲ��Һ���
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

//��������ʱ���������ַ����ĳ���
int my_string(char* str) {
	if (*str != '\0') {
		return 1 + my_string(str + 1);
	}
	else {
		return 0;
	}
}

//����������n�Ľ׳�
int Fac(int n) {
	if (n <= 1) {
		return 1;
	 }
	else if (n > 1) {
		return n * Fac(n - 1);
	}
}

//쳲��������� 1 1 2 3 5 8 13
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
	//		printf("%d������\n", i);
	//	}
	//}
	//printf("%d������\n",count);
	////
	//for (i = 1000; i <= 2024; i++) {
	//	if (is_leap_year(i) == 1) {
	//		count++;
	//		printf("%d������\n", i);
	//	}
	//}
	//printf("%d������\n", count);
	char arr[] = "scknb";
	/*int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 != ret) {
		printf("�ҵ��˵�%d��λ��\n", ret);
	}
	else {
		printf("�Ҳ���\n");
	}
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;*/
	printf("%d\n", Fac(4));
}