#include<iostream>
using namespace std;

// ����ӷ�����
int add1(int num1, int num2) //�����е�num1��num2��Ϊ��ʽ������
							 // ����β�
{

	int sum = num1 + num2;

	return sum;
}

int main2() {

	//main�����е���add����
	int a = 10;
	int b = 20;

	//���������﷨����������(����)
	// a��b��Ϊʵ�ʲ��������ʵ�Σ����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add1(a, b);
	cout << "c = " <<c << endl;

	a = 100;
	b = 200;
	int d = add1(a, b);
	cout << "d = " << d << endl;

	system("pause");

	return 0;
}


