#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����õ��ַ������ȣ��������ֲ�����
int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}

//�����޵ݹ�ʵ�ַ����������
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

//�����ݹ�ʵ��:
void reverse_stringdigui(char* str) {
	char tmp = *str;//1.�Ƚ���Ԫ���Ƴ��洢
	int len = my_strlen(str);//�ó��ַ�������
	*str = *(str + len - 1);//��β��Ԫ���ƶ����ײ�
	*(str + len - 1) = '\0';//��β��Ԫ����Ϊ��\0��
	if (my_strlen(str) >=2) {//�жϵݹ�����
		reverse_string(str + 1);//�����ַ����ݹ�
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


