//��������2
//������ 2016/3/12

#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
	srand((int)time(0));         //����ʱ������ ��ʹ�ó���ÿ�����еĽ������ͬ
	int num0, num1, num2, c;
	int limit[8];
	double num3, num4;
	
	cout << "������Ŀ��������";
	cin >> num0;
	cout << endl;
	cout << "�����ӡ��ÿ�еļ����";
	cin >> limit[0];
	cout << endl;
	cout << "�����ӡ��ÿ�е���Ŀ����";
	cin >> limit[1];                                //ÿ�ζ�����̫�鷳�ˣ��������һ����һ���ģ��ɷ��Ϊ����һ�μ���
	cout << endl;
	cout << "�������������ֵ��Χ����Сֵ�����ֵ��";
	cin >> limit[2] >> limit[3];
	cout << endl;
	cout << "�Ƿ��г˳�����������1��û������0��";
	cin >> limit[4];
	cout << endl;
	cout << "�Ӽ����޸�����������1��û������0��";
	cin >> limit[5];
	cout << endl;
	if (limit[4] == 1)
	{
		cout << "��������������������1��û������0��";
		cin >> limit[6];
		cout << endl;
	}
	if (limit[4] == 0)
	{
		cout << "�Ƿ�֧��С����������1��û������0��";
		cin >> limit[7];
		cout << endl;
		if (limit[7] == 1)
		{
			cout << "��֧��С������ȷ������λ��";
			cin >> limit[8];
			cout << endl;
		}
	}
	for (int i = 0; i<num0; i++)              //�����Ŀ��ѭ��
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
						cout << "��" << i + 1 << "����" << num1 << "/" << num2 << "=" << "    ";
					else
					{
						while (num1%num2 != 0)
						{
							num2 = num2 - num1%num2;
						}
						cout << "��" << i + 1 << "����" << num1 << "/" << num2 << "=" << "    ";

					}
				}
			}                                    //������������ĳ���
			if (c % 4 == 1) cout << "��" << i + 1 << "����" << num1 << "+" << num2 << "=" << "    ";
			if (c % 4 == 2) cout << "��" << i + 1 << "����" << num1 << "-" << num2 << "=" << "    ";
			if (c % 4 == 3) cout << "��" << i + 1 << "����" << num1 << "*" << num2 << "=" << "    ";
		}                                   //����г˳�������Ŀ
		else
		{
			if (limit[7] == 1)
			{
				num3 = pow(0.1, limit[8]) + (int)(0.1*rand() / (RAND_MAX + 1.0)) + num1;
				num4 = pow(0.1, limit[8]) + (int)(0.1*rand() / (RAND_MAX + 1.0)) + num2;
			}
			if (limit[5] == 1)
			{
				if (c % 2 == 0) cout << "��" << i + 1 << "����" << pow(-1, i)*num3 << "-" << pow(-1, i + 1)*num4 << "=" << "    ";
				if (c % 2 == 1) cout << "��" << i + 1 << "����" << pow(-1, i)*num3 << "+" << pow(-1, i + 1)*num4 << "=" << "    ";
			}
			else
			{
				if (c % 2 == 0) cout << "��" << i + 1 << "����" << num3 << "-" << num4 << "=" << "    ";
				if (c % 2 == 1) cout << "��" << i + 1 << "����" << num3 << "+" << num4 << "=" << "    ";
			}                                //������޸����ļӼ�
		}
		if ((i%limit[1]) + 1 == limit[1])     //ÿ�д�ӡ����Ŀ��
		for (int k = 0; k <= limit[0]; k++)
			cout << endl;                //ÿ�д�ӡ�ļ��
	}
}