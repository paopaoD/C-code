#include<iostream>
using namespace std;

/*
ֵ���ݣ�
	���Ǻ���������ʵ�ν���ֵ������β�
	ֵ����ʱ������βη�����������Ӱ��ʵ��

*/


// �����������Ҫ����ֵ��������ʱ�����дvoid

void swap(int num1, int num2) {

	cout << "����ǰ��" << endl;
	cout << num1 << endl;
	cout << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << num1 << endl;
	cout << num2 << endl;

}



int main3() {

	int a = 10;
	int b = 20;

	//ֵ����֮ǰ��
	cout << "ֵ����ǰ��" << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//����ֵ���ݵ�ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��
	swap(a, b);

	//ֵ����֮�󣺺������βη����ı䣬������Ӱ��ʵ��
	cout << "ֵ���ݺ�" << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	// *** ֵ���ݣ��β���Ӱ�첻��ʵ�ε�


	system("pause");

	return 0;
}














