#include <stdio.h>
#include<string.h>
//求两个数最小公倍数
//法一
int min_zuixiaogongbeishu(int m, int n) {
    int t = m > n ? m:n;
    while (1) {
        if ((t % m == 0) && (t % n == 0)) {
            break;
        }
        t++;
    }
    return t;
}
//法二两数相乘除以最小公约数即是最小公倍数（辗转相除法）

//题二-倒置字符串  1.整个字符串倒置  2.每个单词倒置
void my_reverse(char* left, char* right) {
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[1000] = { 0};
    gets(arr);
    int len = strlen(arr);
    //1.整个字符串倒置
    my_reverse(arr, arr + len - 1);
    //2.倒置每个单词
    char* start = arr;
    while (*start) {
        char* end = start;
        while (*end != ' ' && *end != '\0') {    //单词结束可能为空格和斜杠0
            end++;
        }
        my_reverse(start, end - 1);//倒置每个单词
        if (end != ' ') {             //遇到空格 进行下一个单词start加一
            start = end + 1;
        }
        else {
            start = end;          //最后一个为斜杠0无需操作  
        }
    }
}

