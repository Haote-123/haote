﻿//随机生成30道100以内的四则运算题目
//胡浩特 2016/3/5

#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define random(x) (rand()%x)

int main()
{
	int i, a, b;
	int mode = 0,result=0;//0:加 1:减 2:乘 3:除 
	
	for (i = 0; i<30; i++) //随机生成三十道题目
	{
		a = random(100); //生成一个0~99之间的随机数
		b = random(100); //生成一个0~99之间的随机数
		mode = random(4); //生成一个0~3之间的随机数，代表运算符
		cout<< a; //打印算式
		switch (mode) //确定运算符
		{
		case 0:
			cout<<"+";
			result = a + b; 
			break;
		case 1:
			cout<<"-";
			result = a - b; 
			break;
		case 2:
			cout<<"*";
			result = a * b; 
			break;
		case 3:
			cout<<"/";
			result = a / b; 
			break;
		default:
			cout<<"somethingis wrong!\n";
			break;
		}
		cout<< b<<"="<<endl;
	
	}
	return 0;
}


