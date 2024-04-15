// zifuchuanmonishixian.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<string.h>
#include <stdio.h>
#include<assert.h>
//模拟实现strcpy函数实现字符串拷贝-strcpy函数实际返回目标空间起始地址
char* my_strcpy(char* dest,const char* src) {
	/*while (*src != '\0') {
		*dest++ = *src++;
	}
	*dest = *src;
}*/
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++) {
	}
	return ret;
}

//模拟实现strlwn函数实现字符串拷贝-strcpy函数实际返回目标空间起始地址
size_t  my_strlen(const char* src) {
	assert(src != NULL);
	/*size_t count = 0;
	while (*(src++)!='\0') {
		count++; 
	}
	return count;*/
	if(*(src++) != '\0') {
		return 1+my_strlen(src);
	}
	else {
		return 0;
	}
}

//计算参数n的二进制中有多少个1
int Numberof1(int n) {
	int count = 0;
	int i = 0;
	for(i=0;i<32;i++){
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
}

//计算参数n的二进制中有多少个1
//int Numberof1(int n) {
//	int count = 0;
//	int i = 0;
//	while(n){
// n=n&(n-1);
// count++;}
// return count;
//}

//计算两个数中二进制位不同个数
int erjinzhi_xiangyi(int m, int n) {
	int count = 0;
	for (int i = 0; i <= 32; i++) {
		if (((m >> i) & 1) == ((n >> i) & 1)) {
			count++;
		}

	}
}
int main()
{
	char arr1[20] = "xxxxxx";
	char arr2[]="hello";
	printf("%d\n", my_strlen(arr2));
	return 0;
}


