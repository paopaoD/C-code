#include<iostream>
using namespace std;


int main10() {

// forѭ�����
//	 ���ã�����ѭ��������ִ��ѭ�����
//	 �﷨��for(��ʼ���ʽ;�������ʽ;ĩβѭ����){ѭ�����;}

	for (int i = 0; i < 10; i++) 
	{
		cout <<"i = " << i << endl;
	}

	cout << "================������=============" << endl;


	// ������
	// ��1-100�������У��Ҵ��������֣���ӡ�������ӡ�
	// ����� 7 �ı�������λ����7 ����ʮλ��7����ӡ������

	for (int num = 1; num <= 100; num++) {
		if (num%7 == 0 || num%10 == 7 || num/10 == 7)
		{
			cout << "�����ӣ�" << endl;
		}
		else {
			cout << num << endl;
		}
	}




	system("pause");
	return 0;
}