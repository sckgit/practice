#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数得到字符串长度，不创建局部变量
int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}

//函数无递归实现反向输出数组
void reverse_string(char* str) {
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

//函数递归实现:
void reverse_stringdigui(char* str) {
	char tmp = *str;//1.先将首元素移出存储
	int len = my_strlen(str);//得出字符串长度
	*str = *(str + len - 1);//将尾部元素移动到首部
	*(str + len - 1) = '\0';//将尾部元素设为‘\0’
	if (my_strlen(str) >=2) {//判断递归条件
		reverse_string(str + 1);//后续字符串递归
	}
	*(str + len - 1) = tmp;
	
}

int main()
{
	char arr[] = "abcdefg";
	reverse_stringdigui(arr);
	printf("%s",arr);
	return 0;
}


