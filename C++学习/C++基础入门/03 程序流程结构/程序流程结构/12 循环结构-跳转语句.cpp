#include<iostream>
using namespace std;


int main12() {

// break���
//	 ���ã�����ѡ��ṹ����ѭ���ṹ
//	 breakʹ�õ�ʱ����
//		1,������switch��������У���������ֲcase������switch
//		2,������ѭ������У�������������ǰ��ѭ�����
//		3,������Ƕ��ѭ���У�����������ڲ�ѭ�����

	//// 1��������switch��������У���������ֲcase������switch
	//cout << "1����ͨ" << endl;
	//cout << "2���е�" << endl;
	//cout << "3������" << endl;
	//cout << "��ѡ�񸱱��Ѷ�:" << endl;

	//int select = 0;	//����ѡ�����ı���

	//cin  >> select;	//�ȴ��û�����

	//switch (select)
	//{
	//case 1:
	//	cout << "��ѡ�������ͨ�Ѷ�" << endl;
	//	break;
	//case 2:
	//	cout << "��ѡ������е��Ѷ�" << endl;
	//	break;
	//case 3:
	//	cout << "��ѡ����������Ѷ�" << endl;
	//	break;
	//default:
	//	break;
	//}



	// 2,������ѭ������У�������������ǰ��ѭ�����
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;	//�˳�ѭ��
		}
		cout << i << endl;
	}


	// 3,������Ƕ��ѭ���У�����������ڲ�ѭ�����
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) {
				break;	//�˳��ڲ�ѭ��
			}
			cout << "* ";
		}
		cout << endl;
	}






	system("pause");
	return 0;
}