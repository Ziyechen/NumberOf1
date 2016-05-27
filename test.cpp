#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdlib.h>
#include "NumberOf1.h"
using namespace std;

void TestNumberOf1()
{
	int ret1 = NumberOf1(7);
	int ret2 = NumberOf1(-7);
	int ret3 = NumberOf1(0);

	cout << "ret1 = " << ret1 << endl;
	cout << "ret2 = " << ret2 << endl;
	cout << "ret3 = " << ret3 << endl;
}

int main()
{
	TestNumberOf1();

	system("pause");
	return 0;
}
