#include<iostream>
using namespace std;

int main8() {

	// whileѭ��						--->���ж� ��ִ��
	//	���ã�����ѭ��������ִ��ѭ�����
	//	�﷨��while��ѭ��������{ѭ�����}
	//	���ͣ�ֻҪѭ�������Ľ��Ϊ�棬��ִ��ѭ�����


	// ��ӡ0-9��10������
	int num = 0;
	//ע�������������ṩ����ѭ���ĳ��ڣ����������ѭ��
	while (num <= 9) {
		cout << "num = " << num << endl;
		num++;
	}


	// whileѭ����ϰ������������
	// �������һ�����֣����в²⣬


	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));


	//1,ϵͳ���������
	//rand() % 100 	//�������0-99�����
	int num1 = rand() % 100 + 1;
	//cout << num1 << endl;


	//2,��ҽ��в²�
	int vaule = 0;
	cout << "��Ϸ��ʼ�����������֣�" << endl;

	// ѭ��
	while (1) {

		cin >> vaule;
	
		//4,�ж���ҵĲ²�
		if (vaule > num1) {
			cout << "�´���" << endl;
		}
		else if (vaule < num1) {
			cout << "��С��" << endl;
		}
		else {
			cout << "��ϲ���¶���" << endl;
			break;	//�˳�ѭ��
		}
	}

	
	








	system("pause");
	return 0;
}