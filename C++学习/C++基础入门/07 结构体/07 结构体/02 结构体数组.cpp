#include<iostream>
using namespace std;

/*
�ṹ�����飺
	���ã����Զ���Ľṹ����뵽�����з���ά��
	�﷨��struct �ṹ���� ������[Ԫ�ظ���] = {{}��{}...}


*/

//1 ����ṹ��
struct student {
	//��Ա�б�
	string name;
	int age;
	int score;
};



int main2() {

	// 2 �����ṹ������  ����ֵ
	struct student stuArry[3] =
	{
		{"����",19,100},
		{"����",20,89},
		{"����",30,88},
	};

	//3 ���ṹ�������е�Ԫ�ظ�ֵ
	stuArry[2].name = "��˼";
	stuArry[2].age = 25;
	stuArry[2].score = 99;


	// 4 �����ṹ������
	for (int i = 0; i < 3;i++) {
		cout << "������" << stuArry[i].name 
			 << "���䣺" << stuArry[i].age 
			 << "������" << stuArry[i].score << endl;
	}



	system("pause");
	return 0;
}