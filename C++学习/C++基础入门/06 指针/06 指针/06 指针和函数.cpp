#include<iostream>
using namespace std;


// ֵ���ݺ�������������
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// ��ַ���ݺ���
void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int main6() {

//ָ��ͺ��� 

	// 1 ֵ����
	int a = 10;
	int b = 20;
	swap01(a, b);

	//������������ʵ��û�з����ı�
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	// 2 ��ַ����
	int x = 10;
	int y = 20;

	swap02(&x, &y);	//�������x y�ĵ�ַ

	//������ ����ʵ�η����˻���
	cout << "x = " << x << endl;//20
	cout << "y = " << y << endl;//10



// �ܽ᣺��������޸�ʵ�Σ�����ֵ���ݺ�����
//		������޸�ʵ�Σ����õ�ַ����

	system("pause");
	return 0;
}