#include<iostream>
using namespace std;

//����ָ��+����+����  ʵ��ð������



//����ð��������
void bubbleSort(int *arr, int len) 
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			//��� j > j+1��ֵ����������
			if (arr[j] > arr[ j + 1 ]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//�����ӡ���麯��
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}


int main() {

//����ָ��+����+����  ʵ��ð������

	// 1 ��������
	int arr[10] = { 4,8,6,2,10,3,1,7,9,5 };

	// 2 �������鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	// 3 ����ð��������
	bubbleSort(arr,len);

	// 4 ��ӡ����������
	printArray(arr, len);


	system("pause");
	return 0;
}




