#include<iostream>
using namespace std;


int main3() {

	// 2 **ʵ��**�������ͣ�

//	2.1 ������ float		4�ֽ�		7λ��Ч����
//	2.2 ˫���� double	8�ֽ�		15~16λ��Ч����

	// Ĭ������£����һ��С��������ʾ6λ��Ч����

	//float f1 = 3.14;	// Ĭ����˫���ȣ���Ҫ�ں����f
	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;	// 4�ֽ�

	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;	// 8�ֽ�

	// ��ѧ������
	float f2 = 3e2;	// 3*10^2
	cout << "f2 = " << f2 << endl;	// 300

	float f3 = 3e-2; // 3*0.1^2
	cout << "f3 = " << f3 << endl;	// 0.03


	system("pause");
	return 0;
}