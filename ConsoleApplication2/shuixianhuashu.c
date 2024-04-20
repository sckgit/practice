#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		int count = 0;
		int sum = 0;
		int tmp = i;
		while (tmp)  //统计每个数字的位数
		{
			count++;  //只要能进来，说明i至少有一位，计数器先加1
			tmp = tmp / 10;  //每统计一位，右移一位，进行下一位
		}
		tmp = i; //再次将原来的数字保存起来，否则tmp都成0了
		while (tmp)
		{
			sum = sum + pow((tmp % 10), count);
			tmp = tmp / 10;
		}
		if (sum == i)  //注意是i,不能是tmp，因为它一直是变的
		{
			printf("%d ", i);
		}
	}
	return 0;
}
