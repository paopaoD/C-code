#include<iostream>
using namespace std;


int main2() {

	//ָ����ռ�ڴ�ռ�

	//����ָ��
	int a = 10;

	int* p = &a;

	//��32λ����ϵͳ�У�ָ����ռ�� 4 ���ֽڿռ��С��������ʲô��������
	//��64λ����ϵͳ�У�ָ����ռ�� 8 ���ֽڿռ��С

	cout << "sizeof(int *) = " << sizeof(int * ) << endl;
	cout << "sizeof(int *) = " << sizeof(float * ) << endl;
	cout << "sizeof(int *) = " << sizeof(double * ) << endl;
	cout << "sizeof(int *) = " << sizeof(char * ) << endl;




	//�žų˷���
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {

			cout << j << "*" << i << "=" << j*i << "\t";

		}
		cout << endl;
	}


	//  



	system("pause");
	return 0;
}