#include<iostream>
using namespace std;

//�ṹ��ָ��
//	  ͨ��ָ����ʽṹ���еĳ�Ա

//  ���ò����� -> ����ͨ���ṹ��ָ����ʽṹ������


//����ṹ��
struct student 
{
	//��Ա�б�
	string name;
	int age;
	int score;
};

int main3() {

	// �����ṹ�����
	struct student stu = { "����",19,88 };

	// ͨ��ָ��ָ��ṹ�����
	struct student* p = &stu;

	//ͨ��ָ����ʽṹ������е�����
	
	// ָ����ʽṹ���е����ԣ����� -> 
	p->name;


	cout << "������" << p->name 
		 << "���䣺" << p->age 
		 << "������" << p->score << endl;








	system("pause");
	return 0;
}