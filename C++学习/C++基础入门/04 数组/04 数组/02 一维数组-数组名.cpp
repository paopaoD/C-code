#include<iostream>
using namespace std;


int main2() {

	//��������;

	//1������ͨ��������ͳ����������ռ���ڴ��С
	int arr[] = { 10,20,30,40,50,60,70,80,90 };

	cout << "��������ռ���ڴ棺"<< sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ棺" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;


	//2������ͨ���������鿴�����׵�ַ
	cout << "�׵�ַΪ��" << arr << endl;//���Ϊ16������
	cout << "�׵�ַΪ��" << (int)arr << endl;//���Ϊ10������

	// Ҫ�鿴������ĳ��Ԫ�صĵ�ַ��Ҫ��һ��ȡַ���� &
	cout << "��һ��Ԫ�ص�ַ��" << (int)&arr[0] << endl;
	cout << "�ڶ���Ԫ�ص�ַ��" << (int)&arr[1] << endl;


	//��������һ�������������Խ��и�ֵ����
	//arr = 100; ������������һ�������������Խ��и�ֵ����


	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}