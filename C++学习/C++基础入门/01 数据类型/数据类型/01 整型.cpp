#include<iostream>
using namespace std;

// �����Դ������������ȥ��֮������ͼ���ҵ����������Դ��������������ɻָ�


int main1() {

	cout << "hello world" << endl;

	int a = 10;
	cout << "a = " << a << endl;


	// 1 **����**��short(2)  int(4)  long(4)  long long(8)
	// 
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



	//���ʹ�С�Ƚ�
   // short < int <= long <= long long






	system("pause");

	return 0;
}
