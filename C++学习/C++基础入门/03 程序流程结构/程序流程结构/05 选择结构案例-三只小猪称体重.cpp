#include<iostream>
using namespace std;

int main5() {

	// ����:  ��ֻС������أ��ж���ֻ����

	// 1,������ֻС������ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2, ���û�������ֻС�������
	cout << "������С��num1������" << endl;
	cin >> num1;

	cout << "������С��num2������" << endl;
	cin >> num2;

	cout << "������С��num3������" << endl;
	cin >> num3;

	// ��ӡ����С�������
	cout << "1��С������Ϊ��" << num1 << endl;
	cout << "2��С������Ϊ��" << num2 << endl;
	cout << "3��С������Ϊ��" << num3 << endl;


	//3,�ж� 
	if (num1 > num2) { //�ж�1��2˭��
		if (num1 > num3) {	//�ж�1��3˭��
			cout << "1��С������" << num1 << endl;
		}
		else {
			cout << "3��С������" << num3 << endl;
		}
	}
	else {	// num1 < num2ʱ  ִ���������
		if (num2 > num3) {
			cout << "2��С������" << num2 << endl;
		}
		else {
			cout << "3��С������" << num3 << endl;
		}
	}




	system("pause");

	return 0;
}