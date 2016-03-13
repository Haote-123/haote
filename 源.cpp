//四则运算2
//胡浩特 2016/3/12

#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
	srand((int)time(0));         //设置时间种子 ，使得程序每次运行的结果都不同
	int num0, num1, num2, c;
	int limit[8];
	double num3, num4;
	
	cout << "输入题目的数量：";
	cin >> num0;
	cout << endl;
	cout << "输入打印中每行的间隔：";
	cin >> limit[0];
	cout << endl;
	cout << "输入打印中每行的题目数：";
	cin >> limit[1];                                //每次都输入太麻烦了，这个设置一般是一样的，可否改为设置一次即可
	cout << endl;
	cout << "输入操作数的数值范围的最小值和最大值：";
	cin >> limit[2] >> limit[3];
	cout << endl;
	cout << "是否有乘除法，有输入1，没有输入0：";
	cin >> limit[4];
	cout << endl;
	cout << "加减有无负数，有输入1，没有输入0：";
	cin >> limit[5];
	cout << endl;
	if (limit[4] == 1)
	{
		cout << "除法有无余数，有输入1，没有输入0：";
		cin >> limit[6];
		cout << endl;
	}
	if (limit[4] == 0)
	{
		cout << "是否支持小数，有输入1，没有输入0：";
		cin >> limit[7];
		cout << endl;
		if (limit[7] == 1)
		{
			cout << "若支持小数，精确到多少位：";
			cin >> limit[8];
			cout << endl;
		}
	}
	for (int i = 0; i<num0; i++)              //输出题目的循环
	{
		num1 = limit[2] + (int)(limit[3] * rand() / (RAND_MAX + 1.0));
		num2 = limit[2] + (int)(limit[3] * rand() / (RAND_MAX + 1.0));
		c = 1 + (int)(4 * rand() / (RAND_MAX + 1.0));
		if (limit[4] == 1)
		{
			if (c % 4 == 0)
			{
				if (limit[6] == 1)
				{
					if (num1%num2 == 0)
						cout << "第" << i + 1 << "道：" << num1 << "/" << num2 << "=" << "    ";
					else
					{
						while (num1%num2 != 0)
						{
							num2 = num2 - num1%num2;
						}
						cout << "第" << i + 1 << "道：" << num1 << "/" << num2 << "=" << "    ";

					}
				}
			}                                    //输出有无余数的除法
			if (c % 4 == 1) cout << "第" << i + 1 << "道：" << num1 << "+" << num2 << "=" << "    ";
			if (c % 4 == 2) cout << "第" << i + 1 << "道：" << num1 << "-" << num2 << "=" << "    ";
			if (c % 4 == 3) cout << "第" << i + 1 << "道：" << num1 << "*" << num2 << "=" << "    ";
		}                                   //输出有乘除法的题目
		else
		{
			if (limit[7] == 1)
			{
				num3 = pow(0.1, limit[8]) + (int)(0.1*rand() / (RAND_MAX + 1.0)) + num1;
				num4 = pow(0.1, limit[8]) + (int)(0.1*rand() / (RAND_MAX + 1.0)) + num2;
			}
			if (limit[5] == 1)
			{
				if (c % 2 == 0) cout << "第" << i + 1 << "道：" << pow(-1, i)*num3 << "-" << pow(-1, i + 1)*num4 << "=" << "    ";
				if (c % 2 == 1) cout << "第" << i + 1 << "道：" << pow(-1, i)*num3 << "+" << pow(-1, i + 1)*num4 << "=" << "    ";
			}
			else
			{
				if (c % 2 == 0) cout << "第" << i + 1 << "道：" << num3 << "-" << num4 << "=" << "    ";
				if (c % 2 == 1) cout << "第" << i + 1 << "道：" << num3 << "+" << num4 << "=" << "    ";
			}                                //输出有无负数的加减
		}
		if ((i%limit[1]) + 1 == limit[1])     //每行打印的题目数
		for (int k = 0; k <= limit[0]; k++)
			cout << endl;                //每行打印的间隔
	}
}