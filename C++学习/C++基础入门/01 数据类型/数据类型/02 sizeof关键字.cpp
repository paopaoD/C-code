#include<iostream>
using namespace std;

int main2() {

// sizeof 
	// ��������sizeof�����������ռ���ڴ��С
	// �﷨��sizeof(��������/����)

	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl; //������Ϊ 2
	//���� ֱ����д����
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl; //������Ҳ�� 2

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;




	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;	// 4�ֽ�

	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;	// 8�ֽ�


	system("pause");
	return 0;
}