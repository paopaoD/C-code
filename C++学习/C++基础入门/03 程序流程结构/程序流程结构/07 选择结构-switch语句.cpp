#include<iostream>
using namespace std;

int main7() {

	//switch���
	//	���ã�ִ�ж�������֧���
	//	�﷨��
	//		switch (���ʽ) {	//���ʽֻ�������ͻ����ַ���

	//			case ���1: ִ�����; break;

	//			case ���2:ִ�����; break;

	//			...

	//			default:ִ�����; break;
	//		}


	// ��ϰ������Ӱ���

	//1,��ʾ�û�����Ӱ����
	cout << "�����Ӱ��֣�" << endl;

	//2,�û����д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ:" << score << endl;

	//3,���ݷ��� ��ʾ���Ľ��
	switch (score)
	{
	case 10:
		cout << "�����Ӱ" << endl;
		break;	//�˳���ǰ��֧
	case 9:
		cout << "�����Ӱ" << endl;
		break;	//�˳���ǰ��֧
	case 8:
		cout << "��Ӱ�ǳ���" << endl;
		break;	//�˳���ǰ��֧
	case 7:
		cout << "��Ӱ�ǳ���" << endl;
		break;	//�˳���ǰ��֧
	case 6:
		cout << "��Ӱһ��" << endl;
		break;	//�˳���ǰ��֧
	case 5:
		cout << "��Ӱһ��" << endl;
		break;	//�˳���ǰ��֧
	default:
		cout << "��Ƭ" << endl;
		break;	//�˳���ǰ��֧
	}


	// if��switch������
	//	  switchȱ�㣺�жϵ�ʱ��ֻ���� ���� ���� �ַ��ͣ�������һ������
	//	  switch�ŵ㣺 �ṹ�Ƚ�������ִ��Ч�ʸ�







	system("pause");

	return 0;
}
