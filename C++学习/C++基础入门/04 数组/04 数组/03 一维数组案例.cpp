#include<iostream>
using namespace std;

int main3() {

	// 1����ֻС�������

	// ��������
	int arr[5] = { 300,550,200,400,250 };

	int max = 0;//����һ��������
	//�������飬�����Ƚ� ����滻
	for (int i = 0; i < 5; i++) {

		if (max < arr[i]) {

			max = arr[i];
		}
	}
	cout << "���ص�С�������ǣ�" <<max << endl;

	cout << "=============����Ԫ������=================" << endl;

	// 2,����Ԫ������
	//		ԭ����Ϊ 1,3,2,5,4  ���ú�Ϊ 4,5,2,3,1

	int arr1[5] = { 1,3,2,5,4 };

	cout << "����ǰ������Ϊ��" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}

	//ʵ������
	int start = 0;	// ��һ��Ԫ������
	int end = sizeof(arr1) / sizeof(arr1[0])-1;//ĩβԪ������

	//ѭ�� ֻҪ��һ��Ԫ������С��ĩβ�������ͼ���ִ��
	while (start < end) {

		//ʵ��Ԫ�ػ���
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;

		//��������
		start++;
		end--;
	}

	cout << "���ú������Ϊ��" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	




	system("pause");
	return 0;
}