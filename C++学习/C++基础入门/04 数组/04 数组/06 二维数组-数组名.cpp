#include<iostream>
using namespace std;

int main6() {

	//��ά����������;

	// 1,���Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	cout << "��ά����ռ���ڴ棺" << sizeof(arr) << endl;// 24
	cout << "��һ��ռ���ڴ棺" << sizeof(arr[0]) << endl;// 12
	cout << "��һ��Ԫ��ռ���ڴ棺" << sizeof(arr[0][0]) << endl;// 4

	// ��ȡ��ά�����������
	cout << "������" << sizeof(arr) / sizeof(arr[0]) << endl;

	// ��ȡ��ά�����������
	cout << "������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;



	// 2,���Բ鿴��ά������׵�ַ   
	cout << "�����׵�ַ��" << arr << endl;
				//������Ĭ����16���ƣ�ǰ��(int)ת����ʮ����
	
	cout << "�����׵�ַ��" << (int)arr << endl;
	
	cout << "�����һ���׵�ַ��" << (int)arr[0] << endl;//1536161144

	cout << "����ڶ����׵�ַ��" << (int)arr[1] << endl;//1536161156
	
	// �鿴��ά�����һ��Ԫ�صĵ�ַ   Ҫ��ȡַ�� &
	cout << "�����һ��Ԫ�ص�ַ��" << (int)&arr[0][0] << endl;




	system("pause");
	return 0;
}