#include<iostream>
using namespace std;


int main11() {

	//����Ƕ��ѭ��ʵ����ͼ

	//���ѭ��	���ѭ��ִ��һ�Σ��ڲ�ѭ��ִ��һ��
	for (int i = 0; i < 10; i++) 
	{
		//�ڲ�ѭ��
		for (int j = 0; j < 10; j++) 
		{
			cout << "* ";
		}
		cout << endl;
	}
	

	//�žų˷���
	for (int i = 1; i < 10; i++) 
	{
		for (int j = 1; j <= i;j++) 
		{
			cout << j << "*" << i << "=" << j * i<<"\t";
		}
		cout << endl;
	}













	system("pause");
	return 0;
}