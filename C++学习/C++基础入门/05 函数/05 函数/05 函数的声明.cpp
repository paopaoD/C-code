#include<iostream>
using namespace std;


/*
����������
	���߱������������Լ���ε��ú�����������ʵ��������Ե�������
	 (һ��ֻ���Զ���ĺ���д���� main�������·�ʱ  �Ż�����)
	 
*/

//���磺

//����
int max(int a, int b);	//���������ж�Σ�������ֻ����һ��
int max(int a, int b);


int main5() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}


// �Զ��庯��
int max(int a, int b) {
	return a > b ? a : b;
}




