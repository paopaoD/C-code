#include<iostream>
using namespace std;
#include"swap.h"	//����ͷ�ļ�

/*
�����ķ��ļ���д��
	1,���� .h ��׺����ͷ�ļ�
	2,���� .cpp ��׺����Դ�ļ�
	3,��ͷ�ļ���д����������
	4,��Դ�ļ���д�����Ķ���
*/


// ���磺

// ʵ���������ֽ����ĺ���

////����������		-->д��swap.h��ͷ�ļ���(���ҲҪд)
//void swap1(int a, int b);


////�����Ķ���		-->д��swap.cpp��Դ�ļ���
//void swap1(int a, int b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}



int main() {

	int a = 10;
	int b = 20;

	swap1(a, b);


	system("pause");

	return 0;
}