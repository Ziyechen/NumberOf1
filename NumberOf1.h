#pragma once

//请实现一个函数，输入一个整数，输出该数二进制表示中1的个数。
//例如把9表示成二进制位1001，有2个1，因此输入9，该函数输出2

//int NumberOf1(int n)
//{
//	int count = 0;
//	unsigned int flag = 1;
//
//	while (flag)
//	{
//		if (n & flag)
//			count++;
//
//		flag = flag << 1;
//	}
//
//	return count;
//}

int NumberOf1(int n)
{
	int count = 0;

	while (n)
	{
		n = n & (n - 1);
		count++;
	}

	return count;
}
